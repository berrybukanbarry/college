#include <iostream>
#include <ctime>

using namespace std;

void Menu() {
    cout << "\nPilih Menu Sorting:"<<endl;
    cout << "1. Quicksort"<<endl;
    cout << "2. Bubble Sort"<<endl;
    cout << "3. Mergesort"<<endl;
    cout << "4. Selection Sort"<<endl;
    cout << "5. Insertion Sort"<<endl;
    cout << "0. Keluar"<<endl;
    cout << "Pilihan: ";
}

void tampilArray(int data[], int panjang) {
    cout << "Data: ";
    for (int i = 0; i < panjang; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

void quickSort(int data[], int rendah, int tinggi) {
    if (rendah < tinggi) {
        int pivot = data[tinggi];
        int i = rendah - 1;

        for (int j = rendah; j < tinggi; j++) {
            if (data[j] < pivot) {
                i++;
                swap(data[i], data[j]);
            }
        }

        swap(data[i + 1], data[tinggi]);

        int pivotIndex = i + 1;

        tampilArray(data, tinggi + 1);
        
        quickSort(data, rendah, pivotIndex - 1);
        quickSort(data, pivotIndex + 1, tinggi);
    }
}

void bubbleSort(int data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                swap(data[j], data[j + 1]);
            }
        }

        tampilArray(data, n);
    }
}

void merge(int data[], int kiri, int tengah, int kanan) {
    int n1 = tengah - kiri + 1;
    int n2 = kanan - tengah;

    int kiriArray[n1], kananArray[n2];

    for (int i = 0; i < n1; i++) {
        kiriArray[i] = data[kiri + i];
    }
    for (int j = 0; j < n2; j++) {
        kananArray[j] = data[tengah + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = kiri;

    while (i < n1 && j < n2) {
        if (kiriArray[i] <= kananArray[j]) {
            data[k] = kiriArray[i];
            i++;
        } else {
            data[k] = kananArray[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        data[k] = kiriArray[i];
        i++;
        k++;
    }

    while (j < n2) {
        data[k] = kananArray[j];
        j++;
        k++;
    }
}

void mergeSort(int data[], int kiri, int kanan) {
    if (kiri < kanan) {
        int tengah = kiri + (kanan - kiri) / 2;

        mergeSort(data, kiri, tengah);
        mergeSort(data, tengah + 1, kanan);

        merge(data, kiri, tengah, kanan);

        tampilArray(data, kanan + 1);
    }
}

void selectionSort(int data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (data[j] < data[minIndex]) {
                minIndex = j;
            }
        }

        swap(data[i], data[minIndex]);

        tampilArray(data, n);
    }
}

void insertionSort(int data[], int n) {
    for (int i = 1; i < n; i++) {
        int key = data[i];
        int j = i - 1;

        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;
        }

        data[j + 1] = key;

        tampilArray(data, n);
    }
}

int main() {
    const int UKURAN_MAX = 10;
    int arrayData[UKURAN_MAX];
    
	cout<<"\t\t\t========================="<<endl;
	cout<<"\t\t\t      PROGRAM SORTING"<<endl;
	cout<<"\t\t\t========================="<<endl;
	cout<<""<<endl;
	
    cout << "Masukkan " << UKURAN_MAX << " data : "<<endl;
    for (int i = 0; i < UKURAN_MAX; i++) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> arrayData[i];
    }

    int n = sizeof(arrayData) / sizeof(arrayData[0]);

    int pilihan;

    do {
        Menu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "pengurutan menggunakan Quick Sort:"<<endl;
                quickSort(arrayData, 0, n - 1);
                break;
            case 2:
                cout << "pengurutan menggunakan Bubble Sort:"<<endl;
                bubbleSort(arrayData, n);
                break;
            case 3:
                cout << "pengurutan menggunakan Merge Sort:"<<endl;
                mergeSort(arrayData, 0, n - 1);
                break;
            case 4:
                cout << "pengurutan menggunakan Selection Sort:"<<endl;
                selectionSort(arrayData, n);
                break;
            case 5:
                cout << "pengurutan menggunakan Insertion Sort:"<<endl;
                insertionSort(arrayData, n);
                break;
            case 0:
                cout << "Program selesai"<<endl;
                break;
            default:
                cout << "Pilihan tidak ada"<<endl;
        }

    } while (pilihan != 0);


}
