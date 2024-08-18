#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaPetugas, namaCustomer, kodeTujuan, kodeGroup, tujuanWisata, paketWisata;
    double hargaPaket, ppnBiayaAkomodasi, biayaAkomodasi, totalBiaya;

    cout << " Travel Agent \"SENANG TERUS\"" << endl;
    cout << "Input Nama Petugas: ";
    getline(cin, namaPetugas);
    cout << "Input Nama Customer: ";
    getline(cin, namaCustomer);
    cout << "Pilih Kode Tujuan Wisata [JG/BL/LB]: ";
    cin >> kodeTujuan;

    if (kodeTujuan == "JG") {
        tujuanWisata = "JOGJAKARTA";
    } else if (kodeTujuan == "BL") {
        tujuanWisata = "BALI";
    } else if (kodeTujuan == "LB") {
        tujuanWisata = "LOMBOK";
    } else {
        cout << "Kode tujuan tidak valid." << endl;
        return 1;
    }

    cout << "Pilih Kode Group [F/C]: ";
    cin >> kodeGroup;

    if (kodeGroup == "F") {
        paketWisata = "Family";
        if (kodeTujuan == "JG") {
            hargaPaket = 1500000;
            ppnBiayaAkomodasi = hargaPaket * 0.05;
        } else if (kodeTujuan == "BL") {
            hargaPaket = 4500000;
            ppnBiayaAkomodasi = hargaPaket * 0.15;
        } else if (kodeTujuan == "LB") {
            hargaPaket = 5000000;
            ppnBiayaAkomodasi = hargaPaket * 0.1;
        }
    } else if (kodeGroup == "C") {
        paketWisata = "Company";
        if (kodeTujuan == "JG") {
            hargaPaket = 3000000;
            ppnBiayaAkomodasi = hargaPaket * 0.1;
        } else if (kodeTujuan == "BL") {
            hargaPaket = 7500000;
            ppnBiayaAkomodasi = hargaPaket * 0.05;
        } else if (kodeTujuan == "LB") {
            hargaPaket = 8000000;
            ppnBiayaAkomodasi = hargaPaket * 0.05;
        }
    } else {
        cout << "Kode group tidak valid." << endl;
        return 1;
    }

    totalBiaya = hargaPaket + ppnBiayaAkomodasi;

    cout << "\nRincian Transaksi: " << endl;
    cout << "Nama Petugas: " << namaPetugas << endl;
    cout << "Nama Customer: " << namaCustomer << endl;
    cout << "Tujuan Wisata: " << tujuanWisata << endl;
    cout << "Paket Wisata: " << paketWisata << endl;
    cout << "Harga Paket: " << hargaPaket << endl;
    cout << "PPN Biaya Akomodasi: " << ppnBiayaAkomodasi << endl;
    cout << "Total Biaya: " << totalBiaya << endl;

    return 0;
}
