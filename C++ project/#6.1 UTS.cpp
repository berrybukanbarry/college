#include <iostream>
using namespace std;

double hitungDiskon(string status,double harga) {
    double diskon = 0.0;
    
    if (status == "baru") {
        if (harga <= 200000) {
            diskon = 0.1; 
        } else if (harga <= 500000) {
            diskon = 0.15; 
        } else {
            diskon = 0.2; 
        }
    } else if (status == "lama") {
        if (harga <= 100000) {
            diskon = 0.15; 
        } else if (harga <= 250000) {
            diskon = 0.2; 
        } else {
            diskon = 0.25; 
        }
    }

    return diskon;
}

int main() {
    string status;
    double harga;

	cout<<"===============DISKON AKHIR TAHUN==============="<<endl;
	cout<<"------------Barang Baru------------"<<endl;
	cout<<"Rp. 0 - Rp. 200.000, diskon 10%"<<endl;
	cout<<"Rp. 200.001 - Rp. 500.000, diskon 15%"<<endl;
	cout<<"Lebih dari Rp. 500.000, diskon 20%"<<endl;
	cout<<"------------Barang Lama-------------"<<endl;
	cout<<"Rp. 0 - Rp. 100.000, diskon 15%"<<endl;
	cout<<"Rp. 100.001 - Rp. 250.000, diskon 20%"<<endl;
	cout<<"Lebih dari Rp. 250.000, diskon 25%"<<endl;
	cout<<"------------------------------------------------"<<endl;
    cout << "Masukkan status barang (baru/lama): ";
    cin >> status;

    cout << "Masukkan harga barang: Rp ";
    cin >> harga;

    double diskon = hitungDiskon(status, harga);
    double totalDiskon = harga * diskon;
    double hargaSetelahDiskon = harga - totalDiskon;

    cout << "Diskon yang diberikan: " << (diskon * 100) << "%" << endl;
    cout << "Harga setelah diskon: Rp " << hargaSetelahDiskon << endl;

}
