#include <iostream>
#include <chrono>
#include <cstdlib>

// Fungsi untuk melakukan pertukaran elemen pada posisi tertentu
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Fungsi untuk memilih pivot dan mengelompokkan elemen-elemen yang lebih kecil dan lebih besar daripada pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Pivot diambil dari elemen terakhir
    int i = (low - 1); // Indeks dari elemen yang lebih kecil dari atau sama dengan pivot

    for (int j = low; j <= high - 1; j++) {
        // Jika elemen saat ini lebih kecil daripada pivot, tukar elemen tersebut dengan elemen yang lebih kecil
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // Tukar elemen terakhir (pivot) dengan elemen yang lebih kecil berikutnya
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Fungsi utama untuk melakukan Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Temukan indeks partisi yang membagi array menjadi dua bagian
        int pi = partition(arr, low, high);

        // Lakukan Quick Sort pada dua bagian yang terbagi
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int dataSize = 1000;
    int arr[dataSize];

    // Generate random data for the array
    for (int i = 0; i < dataSize; i++) {
        arr[i] = rand() % 1000;
    }

    std::cout << "Unsorted array: ";
    printArray(arr, dataSize);

    // Measure execution time
    auto start = std::chrono::high_resolution_clock::now();
    quickSort(arr, 0, dataSize - 1);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    std::cout << "Sorted array: ";
    printArray(arr, dataSize);

    std::cout << "RUNNING TIME: " << duration.count() << " microseconds" << std::endl;

    return 0;
}
