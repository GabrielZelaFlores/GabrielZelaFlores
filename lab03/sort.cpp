#include <iostream>
#include <chrono>  // Librería para medir el tiempo
using namespace std;
using namespace std::chrono;

/* Función para ordenar un array usando ordenamiento por inserción */
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        /* Mueve los elementos de arr[0..i-1] que son
           mayores que la clave, a una posición adelante
           de su posición actual */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

/* Función para imprimir un array de tamaño n */
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void worstcase(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = n - i;  // Llena el array en orden descendente para el peor caso
    }
}

// Función principal
int main()
{
    int x;
    cout << "Ingrese el tamaño del array: ";
    cin >> x;
    
    int arr[x];
    worstcase(arr, x);

    cout << "Array antes de ordenar: ";
    printArray(arr, x);

    // Inicia la medición del tiempo
    auto start = high_resolution_clock::now();

    // Llama a la función de ordenamiento por inserción
    insertionSort(arr, x);

    // Detiene la medición del tiempo
    auto stop = high_resolution_clock::now();

    // Calcula la duración
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Array después de ordenar: ";
    printArray(arr, x);

    // Muestra el tiempo que tomó el ordenamiento por inserción
    cout << "Tiempo tomado por el ordenamiento por inserción: " << duration.count() << " microsegundos" << endl;

    return 0;
}

