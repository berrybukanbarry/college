#include <iostream>
#include <chrono>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int arraySize = 1000; 
    int arr[arraySize];

    
    for (int i = 0; i < arraySize; i++) {
        arr[i] = rand() % 1000; 
    }

    std::cout << "Unsorted array: ";
    printArray(arr, arraySize);

    // RUNNING TIME
    auto start = std::chrono::high_resolution_clock::now();
    
    bubbleSort(arr, arraySize);

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    std::cout << "Sorted array: ";
    printArray(arr, arraySize);

    std::cout << "Runinng Time : " << duration.count() << " microseconds" << std::endl;

    return 0;
}
