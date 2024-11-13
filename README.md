<div align="center">
<table>
    <theader>
        <tr>
            <td style="width:25%;"><img src="![LOGOU](./imagenes/LogoUniversidad.png)" alt="EPIS" style="width:80%; height:auto"/></td>
            <td>
                <span style="font-weight:bold;">UNIVERSIDAD LA SALLE</span><br />
                <span style="font-weight:bold;">ESCUELA PROFESIONAL DE INGENIERÍA DE SOFTWARE</span>
            </td>            
        </tr>
    </theader>
    <tbody>
        <tr>
        <td colspan="2"><span style="font-weight:bold;">Proyecto</span>: Linuxerzzz Game</td>
        </tr>
        <tr>
        <td colspan="2"><span style="font-weight:bold;">Fecha</span>:  2024/11/10</td>
        </tr>
    </tbody>
</table>
</div>

<div align="center">
<span style="font-weight:bold;">PROYECTO</span><br />
</div>

<table>
<theader>
<tr><th>INFORMACIÓN BÁSICA</th></tr>
</theader>
<tbody>
    <tr>
        <td>ASIGNATURA:</td><td>Lenguaje de Programación III</td>
    </tr>
    <tr>
        <td>SEMESTRE:</td><td>III</td>
    </tr>
    <tr>
        <td colspan="3">DOCENTE:
        <ul>
        <li>Richart Smith Escobedo Quispe - rescobedoq@unsa.edu.pe</li>
        </ul>
        </td>
    </tr>
</tbody>
</table>

| Nro. | Nombre | Code | User | Porcentaje de Participación |
| ------------- | ------------- | ------------- | ------------- | ------------- |
| 1  | Castro Mamani Sebastian Adriano  | f70a0db  | SebastianCastro-ULS | 100% |
| 2  | Arapa Chua Davis  | 265b390 | LenzG-alt  | 100% |
| 3  | Romero Ramirez Joel  | 5f147fe | B3NJ1RO  | 100% |
| 4  | Huamani Vasquez Juan Jose | 9a02763 | JuanHuamaniVasquez | 100% |
| 5  | Delgado Chipana Piero Adrian | a6e6e07 | Vsrn12  | 100% |
| 6  | Zela Flores Gabriel Frank  | 61501b4 | GabrielZelaFlores | 100% |


---
# Linuxerzzz Game
# MiMenu UI Design para Unity

Este proyecto es un diseño de interfaz de usuario basado en Unity, estructurado utilizando los sistemas UXML y USS de Unity, que son parte del UI Toolkit de Unity. Define una interfaz de menú principal con varios elementos de UI estilizados mediante USS, proporcionando una configuración modular y flexible para menús de juegos o aplicaciones similares. El menú contiene etiquetas, botones e íconos diseñados con una estética cyberpunk.

## Tabla de Contenidos

- [Descripción general](#descripción-general)
- [Estructura](#estructura)
- [Estilos (USS)](#estilos-uss)
- [Ajustes](#ajustes)
- [Activos y dependencias](#activos-y-dependencias)
- [Personalización](#personalización)
- [Licencia](#licencia)

## Descripción general

El diseño de la interfaz está construido en UXML (`MiMenu.uxml`), un formato utilizado por Unity para definir la estructura de la interfaz de usuario en XML. Incluye varios componentes `VisualElement` anidados para crear un menú principal con botones y etiquetas estilizadas. El proyecto utiliza USS (`MisEstilos.uss`) para definir la apariencia y el comportamiento de los elementos, asegurando un diseño coherente y adaptable.

Características clave:
- **UXML** para definir la estructura de la interfaz de usuario.
- **USS** para un estilo consistente y personalizable.
- **Ajustes** para la resolución de pantalla, escalado de píxeles y renderizado de texturas.

## Estructura

El diseño de la interfaz definido en `MiMenu.uxml` incluye las siguientes secciones principales:

### MiMenu.uxml

```xml
<engine:UXML xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:engine="UnityEngine.UIElements" xmlns:editor="UnityEditor.UIElements" noNamespaceSchemaLocation="../../UIElementsSchema/UIElements.xsd" editor-extension-mode="False">
    <Style src="project://database/Assets/UI/MisEstilos.uss" />
    <engine:VisualElement class="contenedor">
        <engine:VisualElement name="Centro" class="centro">
            <engine:VisualElement name="Logo" class="logo">
                <engine:VisualElement name="LogoSi" class="logosi">
                    <engine:Label text="LINUXERZZZ&#10;GAME" name="dasdas" style="font-size: 60px; color: rgb(255, 255, 255);" />
                    <engine:Label text="VERSION 1.0" name="dasdas" style="font-size: 60px; color: rgb(255, 255, 255);" />
                </engine:VisualElement>
            </engine:VisualElement>
            <engine:VisualElement name="Botones" class="botones">
                <engine:Button text="JUGAR" class="botonmenu" />
                <engine:Button text="OPCIONES" class="botonmenu" />
                <engine:Button text="SALIR" class="botonmenu" />
            </engine:VisualElement>
            <engine:VisualElement name="Footer" class="footer" />
        </engine:VisualElement>
        <engine:VisualElement name="VisualElement" class="abajo">
            <engine:VisualElement class="centrojuego">
                <engine:VisualElement class="enemigo">
                    <engine:VisualElement class="escopeta">
                        <engine:Button text="ATACANDO" class="botonmenu" style="font-size: 48px;" />
                    </engine:VisualElement>
                    <engine:VisualElement class="vida">
                        <engine:VisualElement class="corazon" />
                        <engine:VisualElement class="corazon" />
                        <engine:VisualElement class="corazon" />
                        <engine:VisualElement class="corazon" />
                        <engine:VisualElement class="corazon" />
                    </engine:VisualElement>
                </engine:VisualElement>
                <engine:VisualElement class="jugador1">
                    <engine:VisualElement class="vida">
                        <engine:VisualElement class="corazon" />
                        <engine:VisualElement class="corazon" />
                        <engine:VisualElement class="corazon" />
                        <engine:VisualElement class="corazon" />
                        <engine:VisualElement class="corazon" />
                    </engine:VisualElement>
                    <engine:VisualElement class="escopeta">
                        <engine:Button text="ATACAR" class="botonmenu" style="font-size: 48px;" />
                    </engine:VisualElement>
                </engine:VisualElement>
            </engine:VisualElement>
        </engine:VisualElement>
    </engine:VisualElement>
</engine:UXML>
```

Este archivo define una estructura de interfaz jerárquica:
- **Sección de logo** con etiquetas para el título del juego y la versión.
- **Sección de botones** para opciones del menú principal (JUGAR, OPCIONES, SALIR).
- **Área de juego** mostrando elementos como íconos de salud y botones de acción para "Jugador1" y "Enemigo".

## Estilos (USS)

El archivo `MisEstilos.uss` define los estilos visuales de cada elemento en la interfaz, incluyendo colores de fondo, configuraciones de fuentes, alineación e interacciones al pasar el ratón sobre los botones.

### MisEstilos.uss

```css
.contenedor {
    width: 100%;
    height: 100%;
    background-color: rgb(123, 117, 117);
}

.centro {
    width: 40%;
    height: 100%;
    justify-content: flex-start;
}

.logo {
    align-self: center;
}

.botonmenu {
    background-color: rgba(0, 0, 0, 0.46);
    color: rgb(255, 255, 255);
    width: 80%;
    align-self: center;
    height: 20%;
    font-size: 28px;
}

.botonmenu:hover {
    background-color: rgba(37, 80, 207, 0.47);
    transition-duration: 1s;
}

.corazon {
    height: 50%;
    background-color: rgba(0, 0, 0, 0.25);
    background-image: url("project://database/Assets/Sprites/Skillicon7_16.png");
}
```

Este archivo USS incluye:
- **Contenedor (`contenedor`)**: fondo de pantalla completo con un color oscuro.
- **Botón (`botonmenu`)**: estilos definidos para efectos de hover y configuración de fuente.
- **Ícono de salud (`corazon`)**: ícono de corazón con una imagen de fondo que representa la salud del jugador.

## Ajustes

El archivo `Settings.asset` configura el comportamiento de la UI, el escalado y la resolución. Unity usa este archivo para optimizar cómo se escala la interfaz en diferentes dispositivos y resoluciones.

### Settings.asset

```yaml
MonoBehaviour:
  m_ReferenceResolution: {x: 1200, y: 800}
  m_Scale: 1
  m_ReferenceDpi: 96
  m_FallbackDpi: 96
  m_ClearColor: {r: 0, g: 0, b: 0, a: 0}
  m_DynamicAtlasSettings:
    m_MinAtlasSize: 64
    m_MaxAtlasSize: 4096
```

Detalles de los ajustes:
- **Resolución de referencia**: 1200x800 para un escalado coherente.
- **Escalado y DPI**: Establecido en 96 para una alta calidad visual.
- **Tamaño del atlas**: Rango de 64 a 4096 para el escalado dinámico de activos.

## Activos y dependencias

La interfaz depende de:
- **Fuente**: `CyberpunkCraftpixPixel` para etiquetas y botones.
- **Imágenes**: Fondos e íconos, como los corazones y el logo del juego, almacenados en `Assets/Sprites/`.
- **Unity UI Toolkit**: Usado para el soporte de UXML y USS en proyectos Unity.

## Personalización

Para ajustar los elementos de la interfaz, modifica lo siguiente:
- **Etiquetas y texto**: Cambia los atributos de texto en `MiMenu.uxml`.
- **Estilos de botones**: Ajusta propiedades como `background-color` en `MisEstilos.uss`.
- **Resolución**: Actualiza `m_ReferenceResolution` en `Settings.asset` para diferentes tamaños de pantalla.

## Licencia

Este proyecto sigue los términos de licencia de los activos de Unity y cualquier dependencia de terceros incluida.

Para ejecutar esta interfaz de usuario en Unity, sigue estos pasos:

---
## Evidencia de Funcionamiento

'Captura de imagen de la Interfaz'
![UI1](./imagenes/UI1.png)

'Captura de imagen de la Interfaz'
![UI2](./imagenes/UI2.png)

'Captura de imagen del entorno.'
![UI3](./imagenes/UI3.png)

## Instrucciones para Ejecutar

1. **Importar los archivos en Unity**:
   - Colocar los archivos `MiMenu.uxml`, `MisEstilos.uss`, y `Settings.asset` en las carpetas correspondientes dentro de tu proyecto Unity, asegurándote de mantener la estructura de archivos indicada.
   - Los archivos de fuente y las imágenes referenciadas deben estar en las ubicaciones especificadas dentro de `Assets/`.

2. **Configurar el Panel de UI en Unity**:
   - Abrri la ventana **UI Toolkit** en Unity y selecciona **Panel Settings** para vincular el archivo `Settings.asset` a la configuración del panel.
   - Asegurar de que el archivo `MiMenu.uxml` esté asignado como la estructura principal de la interfaz.

3. **Aplicar el Estilo (USS)**:
   - Asociar el archivo de estilo `MisEstilos.uss` en el editor de Unity al `VisualElement` principal o en el mismo Panel Settings para que todos los elementos hereden los estilos definidos.

4. **Ejecutar la Escena**:
   - Cargar la escena de Unity en la que has agregado este UI.
   - Ejecutar la escena en el **Editor de Unity** para ver el diseño y verificar que todos los elementos de UI se muestren correctamente.

---

# Proyecto: Linuxerzzz Game Ruleta Rusa

Este proyecto es un simulador de un juego de Ruleta Rusa entre dos jugadores: un jugador humano y una computadora. Cada jugador tiene un número inicial de vidas, y el objetivo es sobrevivir hasta que el oponente pierda todas sus vidas. A lo largo del juego, cada jugador puede dispararse a sí mismo o al oponente y puede usar objetos especiales con efectos únicos que afectan el juego.

---

## Archivos y Descripción de Clases

### 1. **`main.cs`**
   - Este archivo contiene el punto de entrada al programa.
   - **Clase `Program`**:
     - **Método `Main`**: 
       - Muestra un mensaje de bienvenida y solicita al usuario la cantidad de vidas iniciales para cada jugador.
       - Crea una instancia de la clase `JuegoRuletaRusa` y llama a su método `EmpezarJuego` para iniciar la simulación.
---

### `main.cs`

```csharp
using System;

public class Program
{
    public static void Main()
    {
        Console.WriteLine("Bienvenido al juego de Ruleta Rusa");
        Console.Write("Ingresa la cantidad de vidas iniciales para cada jugador: ");
        int vidas = int.Parse(Console.ReadLine());

        JuegoRuletaRusa juego = new JuegoRuletaRusa(vidas);
        juego.EmpezarJuego();
    }
}
```

---

### 2. **`bala.cs`**
   - Este archivo define la clase `Bala`.
   - **Clase `Bala`**:
     - Representa una bala en el tambor de la ruleta, que puede ser real o falsa.
     - **Propiedad `EsReal`**: Indica si la bala es real (`true`) o falsa (`false`).
     - **Constructor**: Permite inicializar una instancia de `Bala` con un valor booleano (`esReal`) que define su tipo.
     
### `bala.cs`

```csharp
using System;

public class Bala
{
    public bool EsReal { get; }

    public Bala(bool esReal)
    {
        EsReal = esReal;
    }
}
```

---

### 3. **`jugador.cs`**
   - Este archivo contiene la definición de la clase `Jugador`.
   - **Clase `Jugador`**:
     - Representa a cada jugador, con propiedades como su nombre, número de vidas y su inventario de objetos especiales.
     - **Propiedades**:
       - `Nombre`: Nombre del jugador.
       - `Vidas`: Cantidad de vidas del jugador.
       - `Inventario`: Lista de objetos especiales que el jugador puede usar.
     - **Métodos**:
       - `PerderVida`: Resta una o más vidas al jugador.
       - `RecuperarVida`: Añade una vida al jugador.
       - `EstaVivo`: Devuelve `true` si el jugador tiene al menos una vida.
       - `AgregarObjeto`: Añade un objeto especial al inventario del jugador.
       - `UsarObjeto`: Permite al jugador usar un objeto especial y lo elimina de su inventario si existe.

### `jugador.cs`

```csharp
using System;
using System.Collections.Generic;

public class Jugador
{
    public string Nombre { get; }
    public int Vidas { get; private set; }
    public List<ObjetoEspecial> Inventario { get; private set; }

    public Jugador(string nombre, int vidas)
    {
        Nombre = nombre;
        Vidas = vidas;
        Inventario = new List<ObjetoEspecial>();
    }

    public void PerderVida(int cantidad = 1)
    {
        Vidas -= cantidad;
    }

    public void RecuperarVida()
    {
        Vidas++;
    }

    public bool EstaVivo()
    {
        return Vidas > 0;
    }

    public void AgregarObjeto(ObjetoEspecial objeto)
    {
        Inventario.Add(objeto);
        Console.WriteLine($"{Nombre} obtuvo un objeto especial: {objeto.Tipo}");
    }

    public void UsarObjeto(TipoObjeto tipo, JuegoRuletaRusa juego)
    {
        ObjetoEspecial objeto = Inventario.Find(o => o.Tipo == tipo);
        if (objeto != null)
        {
            objeto.Usar(this, juego);
            Inventario.Remove(objeto);
        }
        else
        {
            Console.WriteLine($"{Nombre} no tiene el objeto {tipo} en su inventario.");
        }
    }
}
```

---

### 4. **`JuegoRuletaRusa.cs`**
   - Este archivo define la lógica central del juego.
   - **Clase `JuegoRuletaRusa`**:
     - Maneja el flujo del juego, incluyendo la creación de jugadores, la gestión de turnos y la administración del tambor de balas.
     - **Propiedades Privadas**:
       - `jugadorHumano` y `jugadorComputadora`: Instancias de los jugadores.
       - `tambor`: Lista de objetos `Bala` que representan las balas en el tambor.
       - `turno`: Indica el turno actual (0 para el jugador humano, 1 para la computadora).
       - `danioDuplicado`: Indica si el daño del próximo disparo será doble.
     - **Métodos**:
       - `RecargarTambor`: Llena el tambor con balas reales y falsas de forma aleatoria.
       - `ShuffleTambor`: Baraja las balas en el tambor aleatoriamente.
       - `EmpezarJuego`: Ciclo principal que alterna turnos entre los jugadores mientras ambos tengan vidas.
       - `TurnoJugador`: Gestiona las acciones de cada jugador en su turno.
       - `MostrarEstado`: Imprime el estado actual de ambos jugadores y del tambor.
       - `Disparar`: Simula un disparo sacando una bala del tambor.
       - `EjecutarDisparo`: Ejecuta el disparo hacia el jugador objetivo, aplicando el daño correspondiente.
       - `UsarObjetoEspecial`: Permite al jugador usar un objeto de su inventario.
       - `SolicitarOpcion`: Solicita una opción al usuario y verifica si es válida.
       - **Objetos especiales iniciales**: Ambos jugadores comienzan con un conjunto predeterminado de objetos especiales.
      
### `JuegoRuletaRusa.cs`

```csharp
using System;
using System.Collections.Generic;

public class JuegoRuletaRusa
{
    private Jugador jugadorHumano;
    private Jugador jugadorComputadora;
    private List<Bala> tambor;
    private int turno;
    private Random random;
    private bool danioDuplicado;

    public JuegoRuletaRusa(int vidasIniciales)
    {
        jugadorHumano = new Jugador("Humano", vidasIniciales);
        jugadorComputadora = new Jugador("Computadora", vidasIniciales);
        random = new Random();
        turno = random.Next(0, 2);
        danioDuplicado = false;
        RecargarTambor();
        GenerarObjetosIniciales();
    }

    private void GenerarObjetosIniciales()
    {
        jugadorHumano.AgregarObjeto(new ObjetoEspecial(TipoObjeto.Cerveza));
        jugadorHumano.AgregarObjeto(new ObjetoEspecial(TipoObjeto.Cigarros));
        jugadorComputadora.AgregarObjeto(new ObjetoEspecial(TipoObjeto.Lupa));
        jugadorComputadora.AgregarObjeto(new ObjetoEspecial(TipoObjeto.Cuchillo));
    }

    public void DuplicarDanio()
    {
        danioDuplicado = true;
    }

    public Bala VerBalaActual()
    {
        return tambor.Count > 0 ? tambor[0] : null;
    }

    public Bala DescartarBala()
    {
        if (tambor.Count > 0)
        {
            Bala balaDescartada = tambor[0];
            tambor.RemoveAt(0);
            return balaDescartada;
        }
        return null;
    }

    private void RecargarTambor()
    {
        tambor = new List<Bala>();
        int balasReales = random.Next(1, 4); // De 1 a 3 balas reales
        int balasFalsas = random.Next(1, 4); // De 1 a 3 balas falsas

        Console.WriteLine($"\nRecargando tambor: {balasReales} balas reales y {balasFalsas} balas falsas.\n");

        for (int i = 0; i < balasReales; i++)
        {
            tambor.Add(new Bala(true));
        }
        for (int i = 0; i < balasFalsas; i++)
        {
            tambor.Add(new Bala(false));
        }

        ShuffleTambor();
    }

    private void ShuffleTambor()
    {
        int n = tambor.Count;
        while (n > 1)
        {
            n--;
            int k = random.Next(n + 1);
            Bala value = tambor[k];
            tambor[k] = tambor[n];
            tambor[n] = value;
        }
    }

    private Bala Disparar()
    {
        Bala bala = tambor[0];
        tambor.RemoveAt(0);
        return bala;
    }

    public void EmpezarJuego()
    {
        while (jugadorHumano.EstaVivo() && jugadorComputadora.EstaVivo())
        {
            if (tambor.Count == 0)
            {
                RecargarTambor();
            }
            
            MostrarEstado();
            if (turno == 0)
            {
                TurnoJugador(jugadorHumano);
            }
            else
            {
                TurnoJugador(jugadorComputadora);
            }
            turno = (turno + 1) % 2;
        }

        Console.WriteLine(jugadorHumano.EstaVivo() ? "¡Ganaste!" : "La computadora ganó.");
    }
    
    private void MostrarEstado()
    {
        Console.WriteLine("\n--- ESTADO ACTUAL DEL JUEGO ---");
        Console.WriteLine($"Jugador: {jugadorHumano.Nombre} | Vidas: {jugadorHumano.Vidas} | Objetos: {jugadorHumano.Inventario.Count}");
        Console.WriteLine($"Computadora: {jugadorComputadora.Nombre} | Vidas: {jugadorComputadora.Vidas} | Objetos: {jugadorComputadora.Inventario.Count}");
        Console.WriteLine($"Balas restantes en el tambor: {tambor.Count}");
        Console.WriteLine("---------------------------------\n");
    }
    
    private void TurnoJugador(Jugador jugador)
    {
        Console.WriteLine($"Turno de: {jugador.Nombre}");
        if (jugador == jugadorComputadora)
        {
            int eleccion = random.Next(1, 3);
            if (eleccion == 1)
            {
                Console.WriteLine("La computadora decide dispararse a sí misma.");
                EjecutarDisparo(jugadorComputadora);
            }
            else
            {
                Console.WriteLine("La computadora decide dispararte.");
                EjecutarDisparo(jugadorHumano);
            }
        }
        else
        {
            int eleccion = SolicitarOpcion("\nElige una opción:\n1. Disparar\n2. Usar objeto especial\n3. Ver inventario\n", 1, 3);
            switch (eleccion)
            {
                case 1:
                    DispararTurno();
                    break;
                case 2:
                    UsarObjetoEspecial(jugador);
                    break;
                case 3:
                    MostrarInventario(jugador);
                    TurnoJugador(jugador);  // Volver a la elección después de ver inventario
                    break;
            }
        }
    }
    
    private void DispararTurno()
    {
        Console.WriteLine("Elige una opción: 1 - Dispararte, 2 - Disparar al oponente");
        int eleccion = int.Parse(Console.ReadLine());

        if (eleccion == 1)
        {
            EjecutarDisparo(jugadorHumano);
        }
        else if (eleccion == 2)
        {
            EjecutarDisparo(jugadorComputadora);
        }
    }
    
    private void UsarObjetoEspecial(Jugador jugador)
    {
        if (jugador.Inventario.Count == 0)
        {
            Console.WriteLine("No tienes objetos especiales disponibles.");
            return;
        }

        Console.WriteLine("\nObjetos Especiales:");
        for (int i = 0; i < jugador.Inventario.Count; i++)
        {
            Console.WriteLine($"{i + 1}. {jugador.Inventario[i].Tipo}");
        }

        int opcionObjeto = SolicitarOpcion("Elige un objeto para usar: ", 1, jugador.Inventario.Count);
        jugador.UsarObjeto(jugador.Inventario[opcionObjeto - 1].Tipo, this);
    }
    
    private void MostrarInventario(Jugador jugador)
    {
        Console.WriteLine("\n--- Inventario ---");
        Dictionary<TipoObjeto, int> conteoObjetos = new Dictionary<TipoObjeto, int>();

        foreach (var objeto in jugador.Inventario)
        {
            if (conteoObjetos.ContainsKey(objeto.Tipo))
                conteoObjetos[objeto.Tipo]++;
            else
                conteoObjetos[objeto.Tipo] = 1;
        }

        foreach (var entrada in conteoObjetos)
        {
            Console.WriteLine($"{entrada.Key}: {entrada.Value}");
        }
    }
    
    private int SolicitarOpcion(string mensaje, int min, int max)
    {
        int opcion;
        bool esValido;
        do
        {
            Console.Write

(mensaje);
            string entrada = Console.ReadLine();
            esValido = int.TryParse(entrada, out opcion) && opcion >= min && opcion <= max;

            if (!esValido)
            {
                Console.WriteLine("Opción inválida. Intenta de nuevo.");
            }
        } while (!esValido);
        
        return opcion;
    }
    
    private void EjecutarDisparo(Jugador objetivo)
    {
        Bala bala = Disparar();
        Console.WriteLine($"Disparo a {objetivo.Nombre}. La bala es {(bala.EsReal ? "real" : "falsa")}.");

        if (bala.EsReal)
        {
            int danio = danioDuplicado ? 2 : 1;
            objetivo.PerderVida(danio);
            Console.WriteLine($"{objetivo.Nombre} ha perdido {danio} vidas. Vidas restantes: {objetivo.Vidas}\n");
            danioDuplicado = false; // Reset daño después de un disparo
        }
        else
        {
            Console.WriteLine("La bala fue falsa. No ocurrió nada.\n");
        }
    }
}
```

---

### 5. **`ObjetoEspecial.cs`**
   - Este archivo define la clase `ObjetoEspecial` y el enumerado `TipoObjeto`.
   - **Enumerado `TipoObjeto`**:
     - Enumera los diferentes tipos de objetos especiales disponibles en el juego (`Cerveza`, `Cigarros`, `Lupa`, `Cuchillo`).
   - **Clase `ObjetoEspecial`**:
     - Representa un objeto especial que el jugador puede usar para obtener ventajas.
     - **Propiedades**:
       - `Tipo`: Indica el tipo de objeto especial.
     - **Método `Usar`**: Define los efectos de cada tipo de objeto especial:
       - `Cerveza`: Elimina la bala actual del tambor.
       - `Cigarros`: Permite al jugador recuperar una vida.
       - `Lupa`: Permite al jugador ver el tipo de la siguiente bala.
       - `Cuchillo`: Duplicará el daño del próximo disparo realizado.

### `ObjetoEspecial.cs`

```csharp
using System;

public enum TipoObjeto
{
    Cerveza,
    Cigarros,
    Lupa,
    Cuchillo
}

public class ObjetoEspecial
{
    public TipoObjeto Tipo { get; }

    public ObjetoEspecial(TipoObjeto tipo)
    {
        Tipo = tipo;
    }

    public void Usar(Jugador usuario, JuegoRuletaRusa juego)
    {
        switch (Tipo)
        {
            case TipoObjeto.Cerveza:
                Bala balaDescartada = juego.DescartarBala();
                Console.WriteLine($"{usuario.Nombre} usó CERVEZA y descartó una bala que era {(balaDescartada.EsReal ? "real" : "falsa")}.");
                break;
            case TipoObjeto.Cigarros:
                usuario.RecuperarVida();
                Console.WriteLine($"{usuario.Nombre} usó CIGARROS y recuperó una vida. Vidas actuales: {usuario.Vidas}");
                break;
            case TipoObjeto.Lupa:
                Bala balaActual = juego.VerBalaActual();
                Console.WriteLine($"{usuario.Nombre} usó LUPA y vio que la próxima bala es {(balaActual.EsReal ? "real" : "falsa")}.");
                break;
            case TipoObjeto.Cuchillo:
                juego.DuplicarDanio();
                Console.WriteLine($"{usuario.Nombre} usó CUCHILLO. ¡El daño del arma ahora es doble!");
                break;
        }
    }
}
```

--- 

## Ejecución del Juego

1. **Inicio**:
   - Al iniciar el programa, se solicita al usuario que ingrese la cantidad de vidas iniciales para cada jugador.
   
2. **Creación del Juego**:
   - Se crea una instancia de `JuegoRuletaRusa` con el número de vidas especificado, configurando los jugadores y el tambor de balas.

3. **Ciclo del Juego**:
   - El juego alterna turnos entre el jugador humano y la computadora.
   - Durante cada turno, los jugadores pueden elegir entre:
     - Dispararse a sí mismos.
     - Disparar al oponente.
     - Usar un objeto especial (si tienen alguno).
   - Si el tambor se vacía, se recarga automáticamente.

4. **Condiciones de Fin del Juego**:
   - El juego finaliza cuando uno de los jugadores pierde todas sus vidas.
   - Un mensaje final anuncia al ganador: el jugador que sobreviva.

---

## Ejemplo de Ejecución

```plaintext
Bienvenido al juego de Ruleta Rusa
Ingresa la cantidad de vidas iniciales para cada jugador: 3

--- ESTADO ACTUAL DEL JUEGO ---
Jugador: Humano | Vidas: 3 | Objetos: 2
Computadora: Computadora | Vidas: 3 | Objetos: 2
Balas restantes en el tambor: 5
---------------------------------

Turno de: Humano
Elige una opción:
1. Disparar
2. Usar objeto especial
3. Ver inventario

Opción seleccionada: 1
Elige una opción: 1 - Dispararte, 2 - Disparar al oponente
...
```

---

## Notas Técnicas

- **Barajado del Tambor**: Las balas son barajadas aleatoriamente al recargar el tambor para que el orden de aparición sea impredecible.
- **Sistema de Duplicación de Daño**: El efecto del objeto `Cuchillo` permite duplicar el daño del siguiente disparo y luego se restablece a daño normal.
- **Excepciones y Validaciones**: La entrada del usuario es validada en el método `SolicitarOpcion`, lo que asegura que las elecciones sean válidas y maneja errores de entrada.

---

## Consideraciones para Mejoras

- **Agregar Modos de Dificultad**: Ajustar el número de balas reales/falsas y la frecuencia de aparición de objetos especiales según el nivel de dificultad.
- **Interfaz Gráfica**: Implementar una interfaz gráfica para mejorar la interacción y visualización del estado del juego.
- **Guardar y Cargar Partidas**: Incluir la opción de guardar el progreso y cargar partidas en cualquier momento.
