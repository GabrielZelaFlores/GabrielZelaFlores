#include <iostream>
#include <vector>
#include <chrono>
#include <cstdlib>  // Para rand()
#include <ctime>    // Para time()
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

// Función para generar un caso promedio para QuickSort (arreglo aleatorio)
void averagecase(vector<int>& arr, int n) {
    srand(time(0));  // Semilla para generar diferentes valores aleatorios
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % n + 1;  // Generar números aleatorios
    }
}

int main() {
    int x;
    cin >> x;

    for (int i = 1; i <= x; i++) {
        vector<int> arr(i);

        // Generar el caso promedio
        averagecase(arr, i);

        // Medir el tiempo de ejecución de QuickSort
        auto inicio = chrono::high_resolution_clock::now();
        quickSort(arr, 0, i - 1);
        auto fin = chrono::high_resolution_clock::now();
        auto duracion = chrono::duration_cast<chrono::nanoseconds>(fin - inicio);

        cout << duracion.count() << endl;
    }

    return 0;
}
