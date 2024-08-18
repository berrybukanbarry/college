#include <iostream>
#include <chrono>
#include <cstdlib>

// Fungsi untuk melakukan pertukaran elemen pada posisi tertentu
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Fungsi untuk melakukan Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, minIndex;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int dataSize = 200;
    int arr[dataSize];

    // Generate random data for the array
    for (int i = 0; i < dataSize; i++) {
        arr[i] = rand() % 1000;
    }

    std::cout << "Unsorted array: ";
    printArray(arr, dataSize);

    // Measure execution time
    auto start = std::chrono::high_resolution_clock::now();
    selectionSort(arr, dataSize);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    std::cout << "Sorted array: ";
    printArray(arr, dataSize);

    std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;

    return 0;
}
