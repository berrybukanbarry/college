#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct PeminjamanBuku {
    string nama;
    string nim;
    string tanggalPeminjaman;
    string kodeBuku;
};

void insertData(PeminjamanBuku[], int&);
void updateData(PeminjamanBuku[], int);
void deleteData(PeminjamanBuku[], int&);
void searchData(const PeminjamanBuku[], int);
void displayData(const PeminjamanBuku[], int);
void saveToFile(const PeminjamanBuku[], int);

int main() {
    const int maxSize = 100;
    PeminjamanBuku dataPeminjaman[maxSize];
    int jumlahData = 0;
    int pilihan;
	
	cout<<"\t\t\t========================="<<endl;
	cout<<"\t\t\tPERPUSTAKAAN SUBUR MAKMUR"<<endl;
	cout<<"\t\t\t========================="<<endl;
	cout<<""<<endl;
    do {
        cout << "=== Menu Perpustakaan ===" << endl;
        cout << "1. Input Data" << endl;
        cout << "2. Update Data" << endl;
        cout << "3. Delete Data" << endl;
        cout << "4. Search Data" << endl;
        cout << "5. Display Data" << endl;
        cout << "6. Exit" << endl;
        cout << "Pilih menu (1-6): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                insertData(dataPeminjaman, jumlahData);
                break;
            case 2:
                updateData(dataPeminjaman, jumlahData);
                break;
            case 3:
                deleteData(dataPeminjaman, jumlahData);
                break;
            case 4:
                searchData(dataPeminjaman, jumlahData);
                break;
            case 5:
                displayData(dataPeminjaman, jumlahData);
                break;
            case 6:
                saveToFile(dataPeminjaman, jumlahData);
                cout << "Data berhasil disimpan ke dalam file 'Data Mahasiswa.txt'" << endl;
                break;
            default:
                cout << "Pilihan tidak ada!!. Silakan pilih kembali." << endl;
                break;
        }

    } while (pilihan != 6);

    return 0;
}

void insertData(PeminjamanBuku data[], int& jumlahData) {
    if (jumlahData < 100) {
        cout << "Masukkan nama: ";
        cin.ignore();
        getline(cin, data[jumlahData].nama);

        cout << "Masukkan NIM: ";
        getline(cin, data[jumlahData].nim);

        cout << "Masukkan tanggal peminjaman (hari/bulan/tahun): ";
        getline(cin, data[jumlahData].tanggalPeminjaman);

        cout << "Masukkan kode buku (nomor rak-kategori buku, contoh: 023-R): ";
        getline(cin, data[jumlahData].kodeBuku);

        jumlahData++;
        cout << "Data berhasil dimasukkan." << endl;
    } else {
        cout << "Array penuh, tidak dapat menambah data." << endl;
    }
}

void updateData(PeminjamanBuku data[], int jumlahData) {
    if (jumlahData > 0) {
        string nimUpdate;
        cout << "Masukkan NIM yang akan diupdate: ";
        cin >> nimUpdate;

        int index = -1;
        for (int i = 0; i < jumlahData; ++i) {
            if (data[i].nim == nimUpdate) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            cout << "Masukkan data baru: " << endl;
            cout << "Nama: ";
            cin.ignore();
            getline(cin, data[index].nama);

            cout << "NIM: ";
            getline(cin, data[index].nim);

            cout << "Tanggal peminjaman (hari/bulan/tahun): ";
            getline(cin, data[index].tanggalPeminjaman);

            cout << "Kode buku (nomor rak-kategori buku, contoh: 023-R): ";
            getline(cin, data[index].kodeBuku);

            cout << "Data berhasil diupdate." << endl;
        } else {
            cout << "NIM tidak ditemukan." << endl;
        }
    } else {
        cout << "Belum ada data untuk diupdate." << endl;
    }
}

void deleteData(PeminjamanBuku data[], int& jumlahData) {
    if (jumlahData > 0) {
        string nimDelete;
        cout << "Masukkan NIM yang akan dihapus: ";
        cin >> nimDelete;

        int index = -1;
        for (int i = 0; i < jumlahData; ++i) {
            if (data[i].nim == nimDelete) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            for (int i = index; i < jumlahData - 1; ++i) {
                data[i] = data[i + 1];
            }
            jumlahData--;
            cout << "Data berhasil dihapus." << endl;
        } else {
            cout << "NIM tidak ditemukan." << endl;
        }
    } else {
        cout << "Belum ada data untuk dihapus." << endl;
    }
}

void searchData(const PeminjamanBuku data[], int jumlahData) {
    if (jumlahData > 0) {
        string nimSearch;
        cout << "Masukkan NIM yang akan dicari: ";
        cin >> nimSearch;

        int index = -1;
        for (int i = 0; i < jumlahData; ++i) {
            if (data[i].nim == nimSearch) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            cout << "Data ditemukan:" << endl;
            cout << "Nama: " << data[index].nama << endl;
            cout << "NIM: " << data[index].nim << endl;
            cout << "Tanggal Peminjaman: " << data[index].tanggalPeminjaman << endl;
            cout << "Kode Buku: " << data[index].kodeBuku << endl;
        } else {
            cout << "NIM tidak ditemukan." << endl;
        }
    } else {
        cout << "Belum ada data untuk dicari." << endl;
    }
}

void displayData(const PeminjamanBuku data[], int jumlahData) {
    if (jumlahData > 0) {
        cout << "=== Data Peminjaman Buku ===" << endl;
        for (int i = 0; i < jumlahData; ++i) {
            cout << "Data ke-" << (i + 1) << ":" << endl;
            cout << "Nama: " << data[i].nama << endl;
            cout << "NIM: " << data[i].nim << endl;
            cout << "Tanggal Peminjaman: " << data[i].tanggalPeminjaman << endl;
            cout << "Kode Buku: " << data[i].kodeBuku << endl;
            cout << "------------------------" << endl;
        }
    } else {
        cout << "Belum ada data untuk ditampilkan." << endl;
    }
}

void saveToFile(const PeminjamanBuku data[], int jumlahData) {
    ofstream file("Data Mahasiswa.txt");

    if (file.is_open()) {
        for (int i = 0; i < jumlahData; ++i) {
            file << "Nama: " << data[i].nama << endl;
            file << "NIM: " << data[i].nim << endl;
            file << "Tanggal Peminjaman: " << data[i].tanggalPeminjaman << endl;
            file << "Kode Buku: " << data[i].kodeBuku << endl;
            file << "------------------------" << endl;
        }
        file.close();
    } else {
        cout << "Gagal membuka file untuk penyimpanan data." << endl;
    }
}

