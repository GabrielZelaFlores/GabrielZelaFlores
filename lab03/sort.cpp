// C++ program for implementation of Insertion Sort (Best Case)
#include <iostream>
#include <chrono>
using namespace std;

/* Function to sort array using insertion sort */
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

/* Function to generate best case for insertion sort (sorted array) */
void bestCase(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;  // Already sorted array
    }
}

// Driver method
int main()
{
    int x;
    cin >> x;
    
    for (int i = 1; i <= x; i++) {
        int b[i] = {};

        // Generate best case
        bestCase(b, i);
        auto startBest = chrono::high_resolution_clock::now();
        insertionSort(b, i);
        auto endBest = chrono::high_resolution_clock::now();
        auto durationBest = chrono::duration_cast<chrono::nanoseconds>(endBest - startBest);
        cout << "Best case duration (ns) for n = " << i << ": " << durationBest.count() << endl;
    }

    return 0;
}
