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
