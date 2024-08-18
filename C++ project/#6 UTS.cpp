#include <iostream>

using namespace std;

int main(){
	
	int air_mineral,uang,kembalian,beli,harga;
	
	cout<<"======================VENDING MACHINE======================"<<endl;
	cout<<"HANYA MENERIMA UANG"<<endl;
	cout<<"Rp. 5.000, Rp. 10.000,"<<endl;
	cout<<"Rp.20.000, Rp. 50.000,"<<endl;
	cout<<"dan Rp. 100.000."<<endl;
	cout<<"=========================PRICE LIST========================="<<endl;
	cout<<"AIR MINERAL = Rp.5.000"<<endl;
	cout<<"Berapa Air Mineral yang ingin anda beli = ";
	cin>>beli;
	cout<<"Masukkan nominal uang anda = ";
	cin>>uang;
	
	harga = beli*5000;
	
	if (uang < harga) {
        cout << "Uang anda kurang.";
    } else if (uang == harga) {
        cout << "Tidak ada kembalian. Terima kasih.";
    } else {
        kembalian = uang - harga;
        cout << "Kembalian: " << kembalian << endl;

        while (kembalian != 0) {
            if (kembalian >= 50000) {
                kembalian -= 50000;
                cout << "1 lembar 50.000" << endl;
            } else if (kembalian >= 20000) {
                kembalian -= 20000;
                cout << "1 lembar 20.000" << endl;
            } else if (kembalian >= 10000) {
                kembalian -= 10000;
                cout << "1 lembar 10.000" << endl;
            } else if (kembalian >= 5000) {
                kembalian -= 5000;
                cout << "1 lembar 5.000" << endl;
            }
        }
    }
	
	
	
	
	
	
	
	
	
}
