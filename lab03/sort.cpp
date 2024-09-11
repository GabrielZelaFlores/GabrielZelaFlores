#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

// Función de partición
int partition(vector<int>& arr, int low, int high) {

    // Elige el pivote
    int pivot = arr[high];

    // Índice del elemento más pequeño encontrado hasta ahora
    int i = low - 1;

    // Recorre los elementos desde low hasta high-1
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);  // Intercambia los elementos
        }
    }

    // Coloca el pivote en su posición correcta
    swap(arr[i + 1], arr[high]);
    return i + 1;  // Retorna la posición del pivote
}

// Implementación de la función QuickSort
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);  // Partición izquierda
        quickSort(arr, pi + 1, high); // Partición derecha
    }
}

// Función para generar el peor caso para QuickSort (arreglo descendente)
void worstcase(vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = n - i;
    }
}

int main() {
    int x;
    cin >> x;

    for (int i = 1; i <= x; i++) {
        vector<int> arr(i);

        // Generar el peor caso
        worstcase(arr, i);

        // Medir el tiempo de ejecución de QuickSort
        auto inicio = chrono::high_resolution_clock::now();
        quickSort(arr, 0, i - 1);
        auto fin = chrono::high_resolution_clock::now();
        auto duracion = chrono::duration_cast<chrono::nanoseconds>(fin - inicio);

        cout << duracion.count() << endl;
    }

    return 0;
}
