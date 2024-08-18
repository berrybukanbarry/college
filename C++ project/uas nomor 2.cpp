#include <iostream>
#include <string>

using namespace std;

struct Barang {
    string nama;
    double harga;
    int stok;
};

const int MAX_BARANG = 100; 

Barang daftarBarang[MAX_BARANG]; 
int jumlahBarang = 0; 


void inputDataBarang() {
    if (jumlahBarang < MAX_BARANG) {
        cout << "Masukkan Nama Barang: ";
        cin >> daftarBarang[jumlahBarang].nama;

        cout << "Masukkan Harga Barang: ";
        cin >> daftarBarang[jumlahBarang].harga;

        cout << "Masukkan Stok Barang: ";
        cin >> daftarBarang[jumlahBarang].stok;

        jumlahBarang++;
        cout << "Data Barang berhasil diinput." << endl;
    } else {
        cout << "Maaf, jumlah barang sudah mencapai batas maksimum." << endl;
    }
}


void tampilDataBarang() {
    if (jumlahBarang > 0) {
        cout << "Daftar Barang:" << endl;
        for (int i = 0; i < jumlahBarang; ++i) {
            cout << "Nama Barang: " << daftarBarang[i].nama << endl;
            cout << "Harga Barang: " << daftarBarang[i].harga << endl;
            cout << "Stok Barang: " << daftarBarang[i].stok << endl;
            cout << "--------------------------" << endl;
        }
    } else {
        cout << "Belum ada data barang." << endl;
    }
}


void deleteDataBarang() {
    if (jumlahBarang > 0) {
        string namaBarang;
        cout << "Masukkan Nama Barang yang akan dihapus: ";
        cin >> namaBarang;

        int index = -1;
        for (int i = 0; i < jumlahBarang; ++i) {
            if (daftarBarang[i].nama == namaBarang) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            for (int i = index; i < jumlahBarang - 1; ++i) {
                daftarBarang[i] = daftarBarang[i + 1];
            }
            jumlahBarang--;
            cout << "Data Barang berhasil dihapus." << endl;
        } else {
            cout << "Barang dengan nama tersebut tidak ditemukan." << endl;
        }
    } else {
        cout << "Belum ada data barang." << endl;
    }
}

// Fungsi untuk mencari data barang berdasarkan nama
void cariDataBarang() {
    if (jumlahBarang > 0) {
        string namaBarang;
        cout << "Masukkan Nama Barang yang akan dicari: ";
        cin >> namaBarang;

        int index = -1;
        for (int i = 0; i < jumlahBarang; ++i) {
            if (daftarBarang[i].nama == namaBarang) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            cout << "Data Barang ditemukan:" << endl;
            cout << "Nama Barang: " << daftarBarang[index].nama << endl;
            cout << "Harga Barang: " << daftarBarang[index].harga << endl;
            cout << "Stok Barang: " << daftarBarang[index].stok << endl;
        } else {
            cout << "Barang dengan nama tersebut tidak ditemukan." << endl;
        }
    } else {
        cout << "Belum ada data barang." << endl;
    }
}

void hitungJumlahPembelian() {
    if (jumlahBarang > 0) {
        string namaBarang;
        cout << "Masukkan Nama Barang yang dibeli: ";
        cin >> namaBarang;

        int index = -1;
        for (int i = 0; i < jumlahBarang; ++i) {
            if (daftarBarang[i].nama == namaBarang) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            int jumlahBeli;
            cout << "Masukkan Jumlah Pembelian: ";
            cin >> jumlahBeli;

            if (jumlahBeli <= daftarBarang[index].stok) {
                daftarBarang[index].stok -= jumlahBeli;
                cout << "Pembelian berhasil. Stok barang sekarang: " << daftarBarang[index].stok << endl;
            } else {
                cout << "Maaf, stok barang tidak mencukupi." << endl;
            }
        } else {
            cout << "Barang dengan nama tersebut tidak ditemukan." << endl;
        }
    } else {
        cout << "Belum ada data barang." << endl;
    }
}

int main() {
    char pilihan;
    
	cout<<"\t\t\t========================="<<endl;
	cout<<"\t\t\t  TOKO HAJI SUBUR MAKMUR"<<endl;
	cout<<"\t\t\t========================="<<endl;
	cout<<""<<endl;
    do {
        cout << "Menu:" << endl;
        cout << "a. Input data barang" << endl;
        cout << "b. Tampil data barang" << endl;
        cout << "c. Delete data barang" << endl;
        cout << "d. Mencari data barang" << endl;
        cout << "e. Hitung jumlah pembelian" << endl;
        cout << "f. Keluar" << endl;
        cout << "Pilih menu (a-f): ";
        cin >> pilihan;

        switch (pilihan) {
            case 'a':
                inputDataBarang();
                break;
            case 'b':
                tampilDataBarang();
                break;
            case 'c':
                deleteDataBarang();
                break;
            case 'd':
                cariDataBarang();
                break;
            case 'e':
                hitungJumlahPembelian();
                break;
            case 'f':
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak ada!!. Silakan coba lagi." << endl;
        }
    } while (pilihan != 'f');
}


