// C++ program for implementation of Insertion Sort
#include <iostream>
#include <chrono>
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
    int x;
    cin >> x;
    for (int i=1;i<=x;i++){
    int b[i]={};
   
    worstcase(b,i);
   
    auto inicio = chrono::high_resolution_clock::now();
    insertionSort(b, i);
    auto fin = chrono::high_resolution_clock::now();
    auto duracion = chrono::duration_cast<chrono::nanoseconds>(fin - inicio);

    cout << duracion.count() << endl;
   
    }

    return 0;
}
/* This code is contributed by Hritik Shah. */
