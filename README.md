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

### Versión 1.0 (Commit ID: `GabrielZelaFlores`)
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

### Versión 1.1 (Commit ID: `B3NJ1RO`)
En esta versión se introduce el uso de precisión personalizada. Se añade la capacidad de que el usuario elija el número de decimales en los resultados, lo cual es útil para cálculos más detallados. También se agrega una función para guardar los resultados en un archivo de texto.

```python
def guardarVector(vector, nombre_archivo="datos_trapecios.txt"):
    with open(nombre_archivo, 'w') as archivo:
        for dato in vector:
            archivo.write(f"{dato}\n")
    print(f"Datos guardados en {nombre_archivo}")
```

### Versión 1.2 (Commit ID: `SebastianCastro-ULS`)
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

### Versión 1.3 (Commit ID: `Vsrn12`)
Se añade la funcionalidad de guardar los resultados en dos formatos distintos: uno con solo los valores de las áreas de los trapecios, y otro que incluye tanto los valores de los trapecios como los tiempos de ejecución en un archivo CSV. Esta versión mejora la documentación de los resultados, lo que facilita el análisis posterior.

```python
def guardar2Vector(vector1, vector2, nombre_archivo="datos_trapecios_tiempo.csv"):
    with open(nombre_archivo, 'w') as archivo:
        for dato1, dato2 in zip(vector1, vector2):
            archivo.write(f"{dato1},{dato2}\n")
    print(f"Datos guardados en {nombre_archivo}")
```

### Versión 1.4 (Commit ID: `LenzG-alt`)
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

### Versión 1.5 (Commit ID: `JuanHuamaniVasquez`)
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
## Lista de tiempos por iteración (en milisegundos)
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
## Lista de tiempos por trapecio
Esta lista muestra el área del trapecio y el tiempo tomado en calcular cada uno:
```
8.3891,5.973697989247739
5.0537,6.123690051026642
3.7276,7.588446955196559
2.9677,9.807653026655316
2.4684,11.804251000285149
2.1139,18.136049970053136
1.8488,18.340024980716407
1.6430,21.547239972278476
1.4784,23.296485072933137
1.3439,24.472006014548242
1.2318,31.818886986002326
1.1370,31.97998891118914
1.0557,34.14089803118259
0.9853,40.0903649860993
0.9237,37.99926093779504
0.8694,47.35278501175344
0.8211,43.82536292541772
0.7778,56.47902505006641
```
## Lista de trapecios mayores
Este es el listado de los trapecios más grandes calculados durante el proceso:
```
8.3891
5.0537
3.7276
2.9677
2.4684
2.1139
1.8488
1.6430
1.4784
1.3439
1.2318
1.1370
1.0557
0.9853
0.9237
0.8694
0.8211
0.7778
```

## Representación Piramidal de los Trapecios
La siguiente tabla muestra una representación de los trapecios calculados en cada iteración en un formato piramidal:
```
8.3891,8.3891
1.8591,5.0537,6.9128
3.7276,0.9826,1.9138,6.6240
1.0918,0.6622,1.8000,2.9677,6.5217
1.1091,0.7435,0.4984,1.6546,2.4684,6.4740
1.5147,0.7777,1.0853,0.3993,0.5572,2.1139,6.4481
0.7846,0.3330,0.5896,1.0441,0.4431,1.8488,1.3893,6.4325
0.7761,0.4707,0.3666,0.2855,0.9965,0.6044,1.2795,1.6430,6.4223
0.4867,1.1838,0.2499,0.3121,0.9479,0.7590,0.3897,0.6078,1.4784,6.4153
1.1003,0.4944,0.7375,0.2713,0.9008,0.2221,0.3314,0.4048,0.6038,1.3439,6.4103
0.7139,0.2398,0.2876,0.3450,0.8563,0.1999,0.5952,0.4138,0.4963,1.0270,1.2318,6.4066
0.5837,0.3541,0.6896,0.4941,0.1818,0.2997,0.4183,0.2537,0.2147,0.9624,1.1370,0.8147,6.4037
0.4892,0.2267,0.5706,0.4194,0.3596,0.3083,0.6654,0.1666,0.2644,0.1944,0.7761,1.0557,0.9052,6.4016
0.4181,0.3625,0.2047,0.1774,0.5564,0.2361,0.3142,0.4824,0.1538,0.2724,0.6419,0.7404,0.8542,0.9853,6.4000
0.2435,0.4151,0.1632,0.3179,0.2131,0.2782,0.3632,0.1865,0.1428,0.4743,0.6192,0.5419,0.8084,0.9237,0.7075,6.3990
0.1712,0.1940,0.2198,0.3624,0.7672,0.3198,0.6771,0.5273,0.1511,0.2491,0.1333,0.2822,0.4107,0.4653,0.5975,0.8694,6.3980
0.2532,0.5129,0.4053,0.2251,0.3204,0.2848,0.1581,0.1406,0.1250,0.3603,0.1779,0.2001,0.5769,0.6489,0.7299,0.8211,0.4559,6.3960
0.2050,0.1642,0.1835,0.3574,0.1315,0.2291,0.3198,0.2862,0.1176,0.1469,0.2561,0.4463,0.4987,0.3994,0.5573,0.6228,0.7778,0.6960,6.3960
```
## 7. Consideraciones Finales

1. **Código unificado**: Todo el desarrollo se ha trabajado en un solo archivo con commits, documentando cada hito.
2. **Eficiencia**: El uso de paralelismo ha permitido una mejora notable en la ejecución cuando se incrementan los trapecios.
3. **Visualización**: La inclusión de gráficos en la última versión ofrece una mejor comprensión del proceso de integración aproximada.
