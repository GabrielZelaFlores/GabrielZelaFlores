// C++ program for implementation of Insertion Sort
#include <iostream>
#include <chrono>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
using namespace std;


/* Fuinction to sort array using insertion sort */
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

<<<<<<< HEAD
/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void worstcase(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=n-i;
    }
}

// Driver method
int main()
{
=======
// Función para generar un caso promedio (arreglo con números aleatorios)
void generateRandomCase(vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000; // Genera números aleatorios entre 0 y 999
    }
}

int main() {
    srand(time(0));  // Inicializa la semilla para la generación de números aleatorios

>>>>>>> eb6626ee17ca7bff687c85873b3c05239bb9fabd
    int x;
    cin >> x;
    for (int i=1;i<=x;i++){
    int b[i]={};
   
    worstcase(b,i);
   
    auto inicio = chrono::high_resolution_clock::now();
    insertionSort(b, i);
    auto fin = chrono::high_resolution_clock::now();
    auto duracion = chrono::duration_cast<chrono::nanoseconds>(fin - inicio);

<<<<<<< HEAD
    cout << duracion.count() << endl;
   
=======
    for (int i = 1; i <= x; i++) {
        vector<int> arr(i);

        // Generar el caso promedio
        generateRandomCase(arr, i);

        // Medir el tiempo de ejecución de QuickSort
        auto inicio = chrono::high_resolution_clock::now();
        quickSort(arr, 0, i - 1);
        auto fin = chrono::high_resolution_clock::now();
        auto duracion = chrono::duration_cast<chrono::nanoseconds>(fin - inicio);

        cout << duracion.count() << endl;
>>>>>>> eb6626ee17ca7bff687c85873b3c05239bb9fabd
    }

    return 0;
}



/* This code is contributed by Hritik Shah. */
