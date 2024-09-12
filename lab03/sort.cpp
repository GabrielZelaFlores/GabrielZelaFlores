#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

// Función de partición
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Implementación de la función QuickSort
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Función para generar el mejor caso para QuickSort (arreglo ya ordenado)
void bestcase(vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;  // Arreglo ya ordenado
    }
}

int main() {
    int x;
    cin >> x;

    for (int i = 1; i <= x; i++) {
        vector<int> arr(i);

        // Generar el mejor caso
        bestcase(arr, i);

        // Medir el tiempo de ejecución de QuickSort
        auto inicio = chrono::high_resolution_clock::now();
        quickSort(arr, 0, i - 1);
        auto fin = chrono::high_resolution_clock::now();
        auto duracion = chrono::duration_cast<chrono::nanoseconds>(fin - inicio);

        cout << duracion.count() << endl;
    }

    return 0;
}

