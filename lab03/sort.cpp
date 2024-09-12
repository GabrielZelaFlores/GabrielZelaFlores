// C++ program for implementation of Insertion Sort (Average Case)
#include <iostream>
#include <chrono>
#include <algorithm> // for random_shuffle
#include <cstdlib>   // for srand, rand
#include <ctime>     // for time
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

/* Function to generate average case for insertion sort (random shuffle) */
void averageCase(int arr[], int n) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    random_shuffle(arr, arr + n);  // Shuffle the array randomly
}

// Driver method
int main()
{
    int x;
    cin >> x;
    
    for (int i = 1; i <= x; i++) {
        int b[i] = {};

        // Generate average case
        averageCase(b, i);
        auto startAvg = chrono::high_resolution_clock::now();
        insertionSort(b, i);
        auto endAvg = chrono::high_resolution_clock::now();
        auto durationAvg = chrono::duration_cast<chrono::nanoseconds>(endAvg - startAvg);
        cout << "Average case duration (ns) for n = " << i << ": " << durationAvg.count() << endl;
    }

    return 0;
}

