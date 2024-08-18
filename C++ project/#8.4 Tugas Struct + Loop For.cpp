#include <iostream>
using namespace std;

// Definisi beberapa fungsi sederhana
void tambah(int a, int b, int &hasil) {
    hasil = a + b;
}

void kurang(int a, int b, int &hasil) {
    hasil = a - b;
}

void kali(int a, int b, int &hasil) {
    hasil = a * b;
}

void bagi(int a, int b, int &hasil) {
    if (b != 0) {
        hasil = a / b;
    } else {
        cout << "Pembagian dengan nol!" << endl;
        hasil = 0; // Menghindari pembagian dengan nol
    }
}

// Definisi struct yang menyimpan nama operasi dan hasilnya
struct Operasi {
    string nama;
    int hasil;
};

int main() {
    int x = 10;
    int y = 5;

    // Definisikan array dari struct Operasi
    Operasi operasi[4];

    // Panggil fungsi-fungsi dan simpan hasilnya dalam array struct
    tambah(x, y, operasi[0].hasil);
    operasi[0].nama = "Penjumlahan";

    kurang(x, y, operasi[1].hasil);
    operasi[1].nama = "Pengurangan";

    kali(x, y, operasi[2].hasil);
    operasi[2].nama = "Perkalian";

    bagi(x, y, operasi[3].hasil);
    operasi[3].nama = "Pembagian";

    // Tampilkan hasil
    for (int i = 0; i < 4; ++i) {
        cout << "Hasil " << operasi[i].nama << ": " << operasi[i].hasil << endl;
    }

    return 0;
}

