
# Linuxerzzz Game

## Introducción

El proyecto **Linuxerzzz Game** combina el diseño de un sistema de gestión de usuarios mediante PHP y un sistema visual interactivo en Unity para juegos. Este proyecto busca integrar funcionalidades de backend para autenticar usuarios y proporcionar un menú dinámico y funcional en Unity, desarrollado con herramientas como **Canvas**, **Button**, y **EventSystem**.

---

## Descripción General

1. **Interfaz Gráfica (Unity)**:
   - Diseño de un menú principal que incluye opciones como iniciar el juego, configuraciones y salir.
   - Implementación de elementos visuales estilizados para la experiencia del usuario.

2. **Backend de Gestión de Usuarios (PHP)**:
   - Registro e inicio de sesión con validación y control de credenciales.
   - Uso del patrón Singleton para manejar conexiones eficientes a la base de datos.

3. **Sistema de Comportamiento en el Juego**:
   - Implementación de scripts para el combate, salud y movimiento del jugador y los enemigos.
   - Gestión de interacciones dinámicas, como knockback, stun y estados de movimiento.

---

## Detalles Técnicos

### Estructura del Sistema

El sistema tiene tres componentes principales:
- **Frontend en Unity**: La interfaz gráfica que se ejecuta como parte del juego.
- **Backend en PHP**: Scripts que interactúan con una base de datos MySQL para gestionar usuarios.
- **Gameplay en Unity**: Código para la lógica de combate, movimiento y comportamiento.

---

## Componentes del Proyecto

### Interfaz Gráfica en Unity

#### Configuración del Menú

El archivo YAML describe la estructura del menú principal:

```yaml
GameObject:
  m_Name: Canvas
  m_Component:
    - RectTransform:
        m_LocalPosition: {x: 0, y: 0, z: 0}
    - CanvasRenderer:
        m_CullTransparentMesh: 1
    - Button:
        m_Name: JUGAR
        m_OnClick:
          m_MethodName: PlayGame
```

#### Diseño Visual

```yaml
RenderSettings:
  m_Fog: 0
  m_AmbientSkyColor: {r: 0.212, g: 0.227, b: 0.259, a: 1}
  m_AmbientIntensity: 1
```

#### Assets

1. **OcclusionCullingSettings (29 &1)**:
   ```yaml
   OcclusionCullingSettings:
     m_OcclusionBakeSettings:
       smallestOccluder: 5
       smallestHole: 0.25
   ```

2. **LightmapSettings (157 &3)**:
   ```yaml
   LightmapSettings:
     m_BakeResolution: 40
     m_TextureCompression: 1
   ```

3. **GameObject (1 &495978345)**:
   ```yaml
   GameObject:
     m_Name: Button
     m_Component:
       - RectTransform:
           m_LocalPosition: {x: 0, y: 0, z: 0}
       - Button:
           m_Name: JUGAR
           m_OnClick:
             m_MethodName: PlayGame
   ```

---

### Sistema de Gestión de Usuarios

#### Login.php

```php
<?php
class Database {
    private static $instance = null;
    private $conn;
    private function __construct() {
        $this->conn = new mysqli("localhost", "root", "root", "unityjuegosesiones");
    }
    public static function getInstance() {
        if (self::$instance === null) {
            self::$instance = new Database();
        }
        return self::$instance;
    }
    public function getConnection() {
        return $this->conn;
    }
}
$loginUser = $_POST["loginUser"];
$loginPass = $_POST["loginPass"];
$db = Database::getInstance();
$conn = $db->getConnection();
$sql = "SELECT password FROM users WHERE username = '$loginUser'";
$result = $conn->query($sql);
if ($result->num_rows > 0) {
    $row = $result->fetch_assoc();
    echo $row["password"] == $loginPass ? "Inicio de Sesión correcto." : "Credenciales Incorrectas.";
} else {
    echo "Usuario no existe.";
}
?>
```

#### RegisterUser.php

```php
<?php
$loginUser = $_POST["loginUser"];
$loginPass = $_POST["loginPass"];
$db = Database::getInstance();
$conn = $db->getConnection();
$sql = "SELECT username FROM users WHERE username = '$loginUser'";
$result = $conn->query($sql);
if ($result->num_rows > 0) {
    echo "Nombre de usuario ya existe.";
} else {
    $sql2 = "INSERT INTO users (username, password, level) VALUES ('$loginUser', '$loginPass', 1)";
    echo $conn->query($sql2) ? "Usuario registrado con éxito." : "Error: " . $conn->error;
}
?>
```

---

### Scripts de Comportamiento en el Juego

1. **EnemyCombat.cs**: Maneja el ataque de los enemigos. Incluye knockback y daño al jugador.
2. **EnemyHealth.cs**: Controla la salud del enemigo y reacciones como la muerte.
3. **EnemyKnockback.cs**: Implementa el efecto de retroceso y aturdimiento en los enemigos.
4. **EnemyMovement.cs**: Define los movimientos básicos y los estados del enemigo.
5. **PlayerCombat.cs**: Permite al jugador atacar y gestionar el daño infligido a los enemigos.
6. **PlayerHealth.cs**: Maneja la salud del jugador y la transición a la pantalla de "Game Over".
7. **PlayerMovement.cs**: Controla los movimientos del jugador y la respuesta a interacciones como knockback.

#### Ejemplo de Knockback (EnemyKnockback.cs)

```csharp
public void Knockback(Transform playerTransform, float knockbackForce, float knockbackTime, float stunTime)
{
    enemyMovement.ChangeState(EnemyState.Knockback);
    StartCoroutine(StunTimer(knockbackTime, stunTime));
    Vector2 direction = (transform.position - playerTransform.position).normalized;
    rb.linearVelocity = direction * knockbackForce;
}
```

#### Estados del Enemigo (EnemyMovement.cs)

```csharp
public enum EnemyState
{
    Idle,
    Chasing,
    Attacking,
    Knockback
}
```

#### Interacción del Jugador (PlayerCombat.cs)

```csharp
public void DealDamage()
{
    Collider2D[] enemies = Physics2D.OverlapCircleAll(attackPoint.position, weaponRange, enemyLayer);
    if (enemies.Length > 0)
    {
        enemies[0].GetComponent<EnemyHealth>().ChangeHealth(-damage);
        enemies[0].GetComponent<EnemyKnockback>().Knockback(transform, knockbackForce, knockbackTime, stunTime);
    }
}
```

---

## Implementación y Configuración

### Configuración del Proyecto

1. **Base de Datos**:
   - Crear una base de datos llamada `unityjuegosesiones`.
   - Crear una tabla `users` con columnas: `id`, `username`, `password`, y `level`.

2. **Unity**:
   - Diseñar el menú en Unity, utilizando `Canvas` y `Buttons`.
   - Configurar los eventos de los botones para conectar con PHP.

3. **Scripts de Gameplay**:
   - Integrar los scripts mencionados en sus respectivos GameObjects.
   - Configurar animaciones, colliders y referencias en Unity.

## Ejecución del Juego

### 1. Configuración del Backend
1. Crear una base de datos en MySQL llamada `unityjuegosesiones`.
2. Crear una tabla `users` con las siguientes columnas:
   - `id` (INT, AUTO_INCREMENT, PRIMARY KEY)
   - `username` (VARCHAR)
   - `password` (VARCHAR)
   - `level` (INT)

### 2. Configuración del Proyecto Unity
1. Importar los scripts proporcionados (`EnemyCombat.cs`, `EnemyHealth.cs`, etc.) en Unity y asignarlos a sus respectivos GameObjects.
2. Configurar los elementos del menú (Canvas, Buttons) y enlazar sus eventos con los métodos correspondientes.
3. Configurar los colliders, animaciones y referencias de los scripts en el editor de Unity.

### 3. Integración del Sistema de Gestión de Usuarios
1. Subir los scripts PHP (`Login.php` y `RegisterUser.php`) a un servidor web con soporte PHP y acceso a la base de datos MySQL.
2. Configurar las URL en Unity para conectar con los scripts PHP.

### 4. Ejecución
1. Abrir el proyecto en Unity.
2. Ejecutar la escena principal en el editor de Unity.
3. Probar las funcionalidades del menú, como iniciar sesión, registrarse y acceder al juego.
4. Iniciar el juego y experimentar las mecánicas de combate, movimiento y gestión de salud.

### 5. Verificación
1. Confirmar que el sistema de registro e inicio de sesión funcione correctamente y registre los datos en la base de datos.
2. Verificar que las interacciones del jugador y los enemigos funcionen como se espera.
```
