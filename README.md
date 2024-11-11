<div align="center">
<table>
    <theader>
        <tr>
            <td style="width:25%;"><img src="https://github.com/rescobedoq/pw2/blob/main/epis.png?raw=true" alt="EPIS" style="width:80%; height:auto"/></td>
            <td>
                <span style="font-weight:bold;">UNIVERSIDAD LA SALLE</span><br />
                <span style="font-weight:bold;">FACULTAD DE INGENIERÍA DE PRODUCCIÓN Y SERVICIOS</span><br />
                <span style="font-weight:bold;">DEPARTAMENTO ACADÉMICO DE INGENIERÍA DE SISTEMAS E INFORMÁTICA</span><br />
                <span style="font-weight:bold;">ESCUELA PROFESIONAL DE INGENIERÍA DE SOFTWARE</span>
            </td>            
        </tr>
    </theader>
    <tbody>
        <tr>
        <td colspan="2"><span style="font-weight:bold;">Proyecto web</span>: Desarrollo de una aplicación web para inscripción de laboratorios</td>
        </tr>
        <tr>
        <td colspan="2"><span style="font-weight:bold;">Fecha</span>:  2022/08/09</td>
        </tr>
    </tbody>
</table>
</div>

<div align="center">
<span style="font-weight:bold;">PROYECTO WEB</span><br />
</div>

<table>
<theader>
<tr><th>INFORMACIÓN BÁSICA</th></tr>
</theader>
<tbody>
    <tr>
        <td>ASIGNATURA:</td><td>Programación Web 2</td>
    </tr>
    <tr>
        <td>SEMESTRE:</td><td>III</td>
    </tr>
    <tr>
        <td>INTEGRANTES:</td>
        <td>- Castro Mamani Sebastian - 100%<br>
            - Arapa Chua Davis - 100%<br>
            - Romero Ramirez Joel - 100%<br>
            - Huamani Vasquez Juan Jose - 100%<br>
            - Delgado Chipana Piero Adrian - 100%<br>
            - Zela Flores Gabriel - 100%
        </td>
    </tr>
    <tr>
        <td colspan="3">DOCENTES:
        <ul>
        <li>Richart Smith Escobedo Quispe - rescobedoq@unsa.edu.pe</li>
        </ul>
        </td>
    </tr>
</tbody>
</table>

# WebApp con Django

[![License][license]][license-file]  
[![Downloads][downloads]][releases]  
[![Last Commit][last-commit]][releases]  

[![Debian][Debian]][debian-site]  
[![Git][Git]][git-site]  
[![GitHub][GitHub]][github-site]  
[![Vim][Vim]][vim-site]  
[![Java][Java]][java-site]

# Informe - Método del Trapecio Paralelo
![531bf23f-8dd1-494b-9809-2626fe7461a7](https://github.com/user-attachments/assets/f3d37a4c-3b4e-440a-b115-35dbff221887)

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
```
Introduce una función matemática en términos de x (por ejemplo, x**2 + 2*x + 1): 8*x**2+3*x+0.5
Ingrese los límites de la función.
Límite inferior = 20
Límite superior = 40
¿Cuántos decimales deseas utilizar para la precisión? 3
161810.000
153810.000
152328.520
151810.000
151570.000
151439.630
151361.020
...
151147.000
151146.900
151146.700
151146.600
151146.500
151146.400
151146.300
151146.200
151146.100
151146.000
151145.900
151145.900
Área final de la función = 151145.900
Trapecios = 65
Datos guardados en listaTrapeciosMayores.csv
Datos guardados en listaTiempoPorIteracion.csv
Datos guardados en listaTiempoPorTrapecioN.csv
```

## Lista de tiempos por iteración (en milisegundos)
El siguiente es el tiempo de ejecución de cada iteración del cálculo:
```
4.265863000910031
4.826359998332919
12.014987998554716
77.30350000019826
11.690741001075367
96.47199800019735
179.70269599936728
18.793339000694687
185.1002060011524
99.46113099977083
...
886.076389999289
805.4129240008479
888.7470120007492
814.8579520002386
917.040434998853
893.2977179993031
906.4396280009532
792.7836269991531
991.6305210008431
```
## Lista de tiempos por trapecio
Esta lista muestra el área del trapecio y el tiempo tomado en calcular cada uno:
```
161810.000000000,4.265863000910031
101055.000000000,4.826359998332919
73032.963,12.014987998554716
57065.0000000000,77.30350000019826
46794.0000000000,11.690741001075367
39644.259,96.47199800019735
34384.519,179.70269599936728
30354.375,18.793339000694687
27168.464,185.1002060011524
24587.0000000000,99.46113099977083
22453.050,109.5590019995143
...
4573.639,814.0820230000827
4494.100,886.076389999289
4417.281,805.4129240008479
4343.043,888.7470120007492
4271.259,814.8579520002386
4201.810,917.040434998853
4134.583,893.2977179993031
4069.473,906.4396280009532
4006.382,792.7836269991531
3945.217,991.6305210008431
```
## Lista de trapecios mayores
Este es el listado de los trapecios más grandes calculados durante el proceso:
```
161810.000000000
101055.000000000
73032.963
57065.0000000000
46794.0000000000
39644.259
34384.519
30354.375
27168.464
...
4656.044
4573.639
4494.100
4417.281
4343.043
4271.259
4201.810
4134.583
4069.473
4006.382
3945.217
```

## Representación Piramidal de los Trapecios
La siguiente tabla muestra una representación de los trapecios calculados en cada iteración en un formato piramidal:
```
161810.000,161810.000
52755.000,101055.000,153810.000
49195.926,30099.630,73032.963,152328.520
30915.000,20840.000,42990.000,57065.000,151810.000
29290.000,22074.000,15882.000,37530.000,46794.000,151570.000
21766.481,16992.407,27133.148,12810.926,33092.407,39644.259,151439.630
17120.379,20876.647,10727.376,13737.289,29508.717,25006.093,34384.519,151361.020
23066.875,11491.875,9223.125,19798.125,14010.625,16779.375,26585.625,30354.375,151310.000
9857.627,24168.738,21344.595,16223.059,11803.855,18696.036,8086.982,13925.665,27168.464,151275.020
15579.000,13647.000,11843.000,19827.000,8619.000,17639.000,7199.000,10167.000,22143.000,24587.000,151250.000
7650.045,14912.254,22453.050,13267.476,18490.316,11718.866,6486.108,8910.150,16653.201,20423.599,10266.424,151231.490
14255.926,11498.519,9037.407,6872.593,7917.963,12840.185,5901.296,10230.926,15745.741,17309.630,20659.630,18947.593,151217.410
7116.746,9053.569,12395.762,11223.437,5412.968,8056.026,6235.726,13626.350,10109.372,14915.198,17667.679,19131.311,16262.308,151206.450
6457.420,10919.519,7256.545,8994.738,8102.318,17813.397,16547.799,14156.545,4999.111,13030.889,11951.880,15328.848,9933.805,5704.942,151197.760
5906.148,8083.926,10603.037,13463.481,14492.815,11518.593,9725.407,4643.926,6594.148,8885.704,12472.074,5256.074,7320.074,15560.074,16665.259,151190.740
7327.969,11101.406,12829.531,5438.906,10284.219,6037.344,9498.281,4335.781,8743.594,11949.844,8020.156,4871.719,6667.031,13740.469,14682.656,15656.094,151185.000
14762.119,9969.446,7924.830,7295.398,10703.092,5038.203,6692.019,4539.037,11462.791,9261.854,13898.207,4065.925,8580.315,12248.543,5563.422,13060.348,6114.694,151180.240
11714.890,5155.631,4691.022,4248.361,6681.145,7807.894,9662.627,8404.191,6150.693,5642.188,9022.435,3827.647,7233.546,10324.767,12442.874,11008.855,13964.684,13192.805,151176.260
5233.913,8784.227,5685.116,7150.694,9366.061,3615.718,6154.980,7676.543,8221.054,3992.274,11223.533,10585.714,4801.372,6643.506,4387.492,9966.556,11880.013,13248.959,12555.155,151172.880
9628.000,10191.000,6586.000,5281.000,8035.000,6135.000,11976.000,3765.000,10770.000,7536.000,4491.000,3426.000,8550.000,7053.000,4878.000,4120.000,9081.000,5700.000,11365.000,12603.000,151170.000
4217.019,4927.352,6513.876,3882.584,5303.251,6096.513,7848.894,8321.543,3255.179,5692.972,4565.275,7390.067,3561.971,8808.013,6945.061,9308.305,9822.418,10892.108,11447.685,12017.083,10350.352,151167.520
6830.319,5668.862,3670.515,5305.751,6431.146,3379.530,4288.546,9477.802,7241.514,4954.662,3100.567,7664.730,6043.993,8099.966,4615.594,8547.224,3973.520,9006.503,9961.123,10456.465,10963.828,11483.212,151165.370
4042.105,6340.880,7483.874,7885.912,5292.569,7092.356,4646.297,8721.549,5631.486,2959.965,6711.358,4964.173,9155.148,8298.470,3755.789,3214.719,3479.994,4338.941,5980.923,10053.907,10519.067,10994.747,9599.268,151163.500
4959.329,5910.023,4091.968,5583.866,5266.968,7679.699,3307.940,3065.116,3821.366,6590.116,3560.023,8452.384,2831.551,6944.051,4371.829,4660.949,9262.106,9680.856,10108.866,8061.412,8852.616,10546.134,6245.440,7307.245,151161.850
9334.224,3622.608,4126.160,7481.424,7135.440,3870.288,2713.808,5231.568,6797.648,8568.528,6146.640,4942.928,4390.224,2928.720,6468.048,8197.968,3151.824,5528.400,8947.280,7835.600,3383.120,5833.424,4662.480,9729.360,10132.688,151160.400
3905.141,4653.298,6045.878,3009.556,5188.482,2803.867,2605.460,6968.819,6653.889,4396.629,3670.321,7291.031,5752.797,3222.528,4917.249,6346.243,5466.998,3442.783,4147.244,7620.526,8301.363,8652.706,9011.331,9377.239,7957.303,9750.430,151159.100
3279.373,4884.148,6513.290,2689.158,3705.365,7415.653,5944.231,3928.115,2505.425,6225.509,4157.369,4393.126,3489.117,8376.543,4635.385,8049.743,7108.362,5669.455,2879.393,3076.131,8709.846,7729.446,5401.183,6807.575,5139.414,9049.651,9395.960,151158.000
2583.411,3941.064,6106.443,7220.437,5085.743,2942.157,4158.338,5332.172,4845.146,2412.784,2759.869,3130.277,3524.009,4381.443,6376.195,4610.379,3729.621,6651.778,5842.522,3324.227,5584.431,6933.192,7812.420,8117.157,7513.513,8744.125,8427.726,9066.356,151156.900
2819.116,2649.744,7308.681,5498.537,5260.938,6765.255,4801.485,4151.667,5028.587,2326.746,6501.415,3549.084,4363.025,5989.479,7588.266,4579.631,7873.099,3173.603,3358.720,3744.697,3945.558,5741.384,2485.621,2993.735,7034.344,8163.181,6242.823,8759.089,8458.510,151156.000
3942.926,5188.259,3565.741,4754.185,5874.926,2394.926,2246.630,3207.519,3384.259,7643.074,2868.259,6356.407,5412.407,4968.852,4544.259,5641.296,2547.963,3751.963,6113.296,2705.741,3035.519,6856.852,4339.074,4138.630,7114.185,6604.259,7914.630,7376.259,8190.926,8471.963,151155.200
```
## Visualizacion de la funcion
![resultado](https://github.com/user-attachments/assets/b993bf9b-37af-462a-9615-ed0f23e48e19)

## SECUENCIAL-TRAPECIO

![tiempoSecuencial](https://github.com/user-attachments/assets/565e96aa-af96-4ec0-a2be-f6f79bf9b404)

## PARALELO-TRAPECIO

![tiempoParalelo](https://github.com/user-attachments/assets/04af02c9-3aaa-477a-a14b-625e99a4e4c2)

## COMPARACION SECUENCIAL/PARALELO-TRAPECIO
![comparativa](https://github.com/user-attachments/assets/b3d46b9a-5e6b-44c6-b2b0-df08fb1121b8)


# Análisis de Rendimiento del Algoritmo

La gráfica presentada muestra la comparación entre los tiempos de ejecución de dos métodos de cálculo de un algoritmo: uno en paralelo y otro secuencial. Los ejes representan la cantidad de operaciones o iteraciones realizadas y el tiempo transcurrido en milisegundos.

## Análisis Detallado

### 1. Rendimiento del Algoritmo

- **Observación**: El método paralelo (representado en púrpura) muestra un rendimiento superior en comparación con el método secuencial (en verde) a medida que aumentan las operaciones.
  
- **Razón**:
  - **Paralelización**: El método paralelo divide el trabajo en sub-tareas que se pueden ejecutar simultáneamente en múltiples núcleos de la CPU. Esto reduce el tiempo total de ejecución, ya que las operaciones se llevan a cabo en paralelo en lugar de en serie.
  - **Menor Tiempo de Espera**: En el enfoque secuencial, cada operación debe completarse antes de pasar a la siguiente. Esto genera un tiempo de espera acumulado que no se presenta en la ejecución paralela, donde varias tareas pueden ejecutarse al mismo tiempo.
  - **Carga de Trabajo**: Cuando se manejan grandes volúmenes de datos, la eficiencia del método paralelo se incrementa considerablemente, aprovechando al máximo la capacidad de procesamiento disponible.

### 2. Estabilidad

- **Observación**: El método paralelo muestra una mayor estabilidad en sus tiempos de ejecución, con menos fluctuaciones y picos en comparación con el secuencial.
  
- **Razón**:
  - **Distribución de la Carga**: En un sistema paralelo, las tareas se distribuyen uniformemente entre varios núcleos, lo que permite una utilización más eficiente de los recursos y reduce la posibilidad de cuellos de botella. Esto es especialmente importante en situaciones donde ciertas tareas pueden tardar más que otras.
  - **Manejo de Errores**: Los métodos paralelos pueden implementar estrategias de recuperación y reintento para tareas que fallan o se ralentizan, lo que ayuda a mantener la estabilidad del rendimiento.
  - **Aislamiento de Tareas**: Las tareas en un entorno paralelo son más independientes, lo que significa que una tarea lenta o fallida no afecta a las demás. En contraste, en un método secuencial, una operación lenta puede ralentizar todo el proceso.

### 3. Diferencia en el Número de Trapecios

- **Observación**: Es normal que el método de trapecio paralelo genere menos trapecios que el secuencial en ciertas condiciones.
  
- **Razón**:
  - **Optimización de Recursos**: El método paralelo puede optimizar el uso de recursos al no requerir el mismo número de particiones para alcanzar un nivel de precisión similar. Esto se traduce en menos trapecios generados, ya que cada trapecio puede abarcar una mayor sección del área bajo la curva, lo que reduce la cantidad total necesaria para lograr el mismo resultado.
  - **Ajustes de Precisión**: Dependiendo de cómo se configure el algoritmo, el método paralelo puede estar diseñado para alcanzar una precisión aceptable con menos divisiones en el rango, a diferencia del secuencial, que podría requerir más subdivisiones para obtener resultados precisos. Esto se traduce en una menor carga computacional en el método paralelo, lo que mejora su rendimiento en situaciones específicas.

## Implicaciones

- **Escalabilidad**: El rendimiento superior del método paralelo sugiere que es más escalable, lo que significa que a medida que se agregan más núcleos o se utilizan arquitecturas de computación más avanzadas, se puede esperar una mejora significativa en el tiempo de ejecución.
  
- **Confiabilidad en Producción**: La estabilidad del método paralelo lo hace más adecuado para aplicaciones en entornos de producción donde los recursos deben ser utilizados de manera eficiente y donde las interrupciones en el servicio deben ser minimizadas.

## Conclusión

En conclusión, el análisis muestra que el método de trapecio paralelo no solo mejora el rendimiento en comparación con el método secuencial, sino que también ofrece una mayor estabilidad en los tiempos de ejecución. Además, la posibilidad de generar menos trapecios en el método paralelo es un fenómeno normal y esperado, dado que este enfoque puede optimizar el uso de recursos y ajustar la precisión de manera más efectiva. Estos hallazgos resaltan la importancia de considerar las características y ventajas de los métodos paralelos en aplicaciones donde se requieren cálculos rápidos y confiables.

