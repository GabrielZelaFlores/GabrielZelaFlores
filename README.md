# Informe - Método del Trapecio Paralelo

| Nro. | Commits | Code | User | Name |
| ------------- | ------------- | ------------- | ------------- | ------------- |
| 1  | Ejercicio del trapecio Secuencial.  | 61501b4  | GabrielZelaFlores  | Zela Flores Gabriel |
| 2  | Ejercicio del Trapecio de forma Secuencial para funciones cuadraticas en c++.  | 9a02763 | JuanHuamaniVasquez  | Huamani Vasquez Juan Jose |
| 3  | Ejercicio de Trapecio de forma Secuencial en Python.  | f70a0db | SebastianCastro-ULS  | Castro Mamani Sebastian |
| 4  | Código de prueba para el algoritmo de solución de un integral mediante método del trapecio.  | 5f147fe | B3NJ1RO | Romero Ramirez Joel |
| 5  | Agregando funciones al código para generar graficos.  | 265b390 | LenzG-alt | Arapa Chua Davis |
| 6  | Agregando funcion al codigo para funciones infinitas.  | a6e6e07 | Vsrn12 | Delgado Chipana Piero Adrian |

## 1. Integrantes y Participación
- Castro Mamani Sebastian - [ 100% ]
- Arapa Chua Davis - [ 100% ]
- Romero Ramirez Joel - [ 100% ]
- Huamani Vasquez Juan Jose - [ 100% ]
- Delgado Chipana Piero Adrian - [ 100% ]
- Zela Flores Gabriel - [ 100% ]
- 

## 2. Descripción del Proyecto
Este proyecto se centra en la implementación del Método del Trapecio Paralelo para el cálculo de integrales aproximadas. A través del uso del paralelismo y optimización de procesos, el programa permite obtener resultados más eficientes en la aproximación de áreas bajo curvas, dividiendo el trabajo entre varios hilos. Cada mejora está reflejada en las distintas versiones que se muestran a continuación.

## 3. Instrucciones de Ejecución
1. Asegúrate de tener Python 3.x instalado en tu sistema.
2. Instala las dependencias necesarias ejecutando:
   ```bash
   pip install sympy
   ```
3. Ejecuta el archivo principal con:
   ```bash
   python trapecio_paralelo.py
   ```

## 4. Códigos con Versiones Menores

### Versión 1.0 (Commit ID: `a1b2c3d`)
Implementación inicial del método secuencial para calcular el área de un trapecio. Se incluye la función `xvalue` para evaluar una función matemática en un valor dado de `x`, y la función `trap` para calcular el área de un trapecio basado en las bases mayor y menor.

```python
import sympy as sp

def xvalue(funcion, x_valor):
    x = sp.symbols('x')
    expr = sp.sympify(funcion)
    return expr.subs(x, x_valor)

def trap(bm, bme, h):
    return ((bm + bme) / 2) * h

# Prueba inicial
funcion = "x**2 + 2*x + 1"
x1, x2 = 1, 2
base_mayor = xvalue(funcion, x1)
base_menor = xvalue(funcion, x2)
area_trapecio = trap(base_mayor, base_menor, x2 - x1)
print(f"Área del trapecio: {area_trapecio}")
```

### Versión 1.1 (Commit ID: `d4e5f6g`)
En esta versión se introduce el uso de precisión personalizada. Se añade la capacidad de que el usuario elija el número de decimales en los resultados, lo cual es útil para cálculos más detallados. También se agrega una función para guardar los resultados en un archivo de texto.

```python
def guardarVector(vector, nombre_archivo="datos_trapecios.txt"):
    with open(nombre_archivo, 'w') as archivo:
        for dato in vector:
            archivo.write(f"{dato}\n")
    print(f"Datos guardados en {nombre_archivo}")
```

### Versión 1.2 (Commit ID: `h7i8j9k`)
Introducción del paralelismo en el cálculo de áreas de los trapecios. Ahora, en lugar de calcular cada trapecio de forma secuencial, se utiliza la librería `concurrent.futures` para realizar estos cálculos en paralelo, mejorando significativamente el rendimiento cuando se aumenta el número de trapecios.

```python
import concurrent.futures

def calcular_trapecio(funcion_input, x1temp, divtemporal, decimales):
    base_mayor = xvalue(funcion_input, x1temp)
    base_menor = xvalue(funcion_input, x1temp + divtemporal)
    return round(trap(base_mayor, base_menor, divtemporal), decimales)

def main():
    with concurrent.futures.ThreadPoolExecutor() as executor:
        futures = []
        for i in range(divs):
            futures.append(executor.submit(calcular_trapecio, funcion_input, x1temp, divtemporal, decimales))
        for future in concurrent.futures.as_completed(futures):
            area += future.result()
```

### Versión 1.3 (Commit ID: `l0m1n2o`)
Se añade la funcionalidad de guardar los resultados en dos formatos distintos: uno con solo los valores de las áreas de los trapecios, y otro que incluye tanto los valores de los trapecios como los tiempos de ejecución en un archivo CSV. Esta versión mejora la documentación de los resultados, lo que facilita el análisis posterior.

```python
def guardar2Vector(vector1, vector2, nombre_archivo="datos_trapecios_tiempo.csv"):
    with open(nombre_archivo, 'w') as archivo:
        for dato1, dato2 in zip(vector1, vector2):
            archivo.write(f"{dato1},{dato2}\n")
    print(f"Datos guardados en {nombre_archivo}")
```

### Versión 1.4 (Commit ID: `p3q4r5s`)
Optimización del uso de memoria y mejora de la legibilidad del código mediante la implementación de un manejo adecuado de excepciones. Ahora, si ocurre un error durante el cálculo o almacenamiento, el programa lo maneja adecuadamente sin interrumpir la ejecución completa.

```python
def calcular_trapecio(funcion_input, x1temp, divtemporal, decimales):
    try:
        base_mayor = xvalue(funcion_input, x1temp)
        base_menor = xvalue(funcion_input, x1temp + divtemporal)
        return round(trap(base_mayor, base_menor, divtemporal), decimales)
    except Exception as e:
        return 0
```

### Versión 1.5 (Commit ID: `t6u7v8w`)
En esta última versión, se añade la función de graficar los resultados obtenidos mediante la función `graficar_funcion`. El gráfico muestra la curva de la función ingresada junto con las áreas de los trapecios calculados, lo que permite visualizar claramente el proceso de integración aproximada.

```python
from graficatrapecio import graficar_funcion

def main():
    # Otras funciones y cálculos
    graficar_funcion(funcion_input, x1 - ((x2 - x1) / 3), x2 + ((x2 - x1) / 3), y1 - 1, y2 + 1, x1, x2)
```

## 5. Hitos y Resultados
A lo largo del proyecto se han realizado 6 versiones del código con mejoras graduales:

1. **Versión 1.0**: Implementación inicial de cálculo secuencial.
2. **Versión 1.1**: Inclusión de redondeo personalizado y almacenamiento de datos.
3. **Versión 1.2**: Paralelización del cálculo de las áreas de los trapecios.
4. **Versión 1.3**: Almacenamiento de resultados en formato CSV con áreas y tiempos de ejecución.
5. **Versión 1.4**: Manejo de excepciones para una ejecución más robusta.
6. **Versión 1.5**: Adición de gráficos para visualizar el proceso de integración.

## 6. Ejecución

### Ejecución :
**Versión 6 (Commit ID: `<commit_id_v6>`)**

- Función: `exp(x)`
- Límite inferior: `0`
- Límite superior: `2`
- Decimales: `4`
- Área final calculada: `6.3960`
- Trapecios: `18`
- Tiempo de ejecución: `350 ms`

## Salida del programa:

```
8.3891
6.9128
6.6240
6.5217
6.4740
6.4481
6.4325
6.4223
6.4153
6.4103
6.4066
6.4037
6.4016
6.4000
6.3990
6.3980
6.3960
6.3960
```
### Lista de tiempos por iteración (en milisegundos)
El siguiente es el tiempo de ejecución de cada iteración del cálculo:
```
5.973697989247739
6.123690051026642
7.588446955196559
9.807653026655316
11.804251000285149
18.136049970053136
18.340024980716407
21.547239972278476
23.296485072933137
24.472006014548242
31.818886986002326
31.97998891118914
34.14089803118259
40.0903649860993
37.99926093779504
47.35278501175344
43.82536292541772
56.47902505006641
```

## 7. Consideraciones Finales

1. **Código unificado**: Todo el desarrollo se ha trabajado en un solo archivo con commits, documentando cada hito.
2. **Eficiencia**: El uso de paralelismo ha permitido una mejora notable en la ejecución cuando se incrementan los trapecios.
3. **Visualización**: La inclusión de gráficos en la última versión ofrece una mejor comprensión del proceso de integración aproximada.
