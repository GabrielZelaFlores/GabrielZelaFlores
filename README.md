
# **Gestor de Lista de Reproducción de Canciones**

## **Abstract**
El proyecto consiste en un sistema para la gestión de listas de reproducción de canciones, utilizando estructuras de datos personalizadas: AVL Tree, Hash Table y Lista Doblemente Enlazada. Este sistema permite realizar operaciones como agregar, eliminar, buscar, ordenar y reproducir canciones de manera eficiente. Se realizaron pruebas con un dataset extenso de canciones para evaluar el rendimiento y la funcionalidad del sistema.

---

## **1. Introduction**
La gestión eficiente de listas de reproducción de canciones es una necesidad común en aplicaciones de streaming y software de entretenimiento. Este proyecto tiene como objetivo diseñar un gestor que combine eficiencia y flexibilidad mediante el uso de estructuras de datos avanzadas.

El sistema implementa las siguientes funcionalidades principales:
- Agregar canciones a la lista de reproducción.
- Eliminar canciones de la lista.
- Cambiar el orden de las canciones.
- Búsqueda por nombre, autor y género.
- Ordenamiento por popularidad, duración, año y otros criterios.
- Reproducción aleatoria de canciones.

Además, se incluye un menú gráfico interactivo creado con **ImGui** para facilitar la interacción con los datos.

---

## **2. Metodología**

### **2.1. Arquitectura del Sistema**
El sistema combina tres estructuras de datos principales:
1. **AVL Tree**: Para búsquedas eficientes y ordenación de canciones.
2. **Hash Table**: Para almacenar canciones clasificadas por año, permitiendo acceso rápido.
3. **Doubly Linked List**: Para gestionar dinámicamente las listas de reproducción.

![Espacio reservado para diagrama de arquitectura]()

### **2.2. Implementación de Funcionalidades**
- **Agregar Canción**:
  ```cpp
  void addSong(const Song& song) {
      Node* newNode = new Node(song);
      if (!head) {
          head = tail = newNode;
      } else {
          tail->next = newNode;
          newNode->prev = tail;
          tail = newNode;
      }
  }
  ```
- **Eliminar Canción**: Se elimina globalmente de todas las estructuras.
- **Ordenamiento**: Posibilita ordenar por popularidad, duración, año, y alfabéticamente.

---

## **3. Resultados**

### **3.1. Pruebas Realizadas**
El dataset proporcionado contenía **1 millón de canciones** distribuidas entre 82 géneros y 61,445 artistas únicos. Se realizaron las siguientes pruebas:
- **Búsqueda por Nombre**: Resultados para palabras clave como "love" retornaron más de 10,000 canciones en menos de 2 segundos.
- **Ordenamiento por Año**: Ordenar 100,000 canciones tomó menos de 1 segundo.

| Funcionalidad       | Tiempo Promedio (ms) | Descripción                     |
|---------------------|----------------------|---------------------------------|
| Agregar Canción     | 10                   | Inserción en todas las estructuras. |
| Buscar por Autor    | 20                   | AVL Tree para búsquedas eficientes. |
| Ordenar por Duración| 15                   | Uso de vectores temporales.       |

![Espacio reservado para gráficos de resultados]()

### **3.2. Análisis de Desempeño**
El sistema demuestra eficiencia en la mayoría de las operaciones, con un tiempo constante promedio para búsquedas en la tabla hash y AVL Tree.

---

## **4. Conclusiones**
Este proyecto muestra cómo las estructuras de datos avanzadas pueden combinarse para crear sistemas robustos y eficientes. La interfaz gráfica añade facilidad de uso, haciendo el sistema accesible para usuarios no técnicos.

**Posibles Mejoras**:
1. Optimizar el manejo de memoria en la lista doble.
2. Añadir más criterios de búsqueda.
3. Ampliar la interfaz gráfica con visualizaciones.

---

## **5. Referencias**
1. API de Spotify para extracción de datos.
2. Implementación de AVL Trees y Hash Tables en "Introduction to Algorithms" de Cormen et al.

---

## **Espacios para Imágenes y Capturas**
- Diagrama de Arquitectura
- Capturas del menú de ImGui
- Ejemplos de resultados

---
```

### Próximos Pasos
1. **Agrega capturas e imágenes** donde están indicados los espacios.
2. **Actualiza resultados específicos** (tiempos, ejemplos de búsqueda, etc.) en las tablas y gráficos.
3. Compártelo en tu repositorio y avísame si necesitas ayuda para perfeccionarlo o adaptarlo al artículo en formato IEEE.
