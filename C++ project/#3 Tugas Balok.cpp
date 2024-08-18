#include <iostream>
using namespace std;

int main(){
	int p,l,t,volume,luas_permukaan,keliling;
	string ulang;
	do{
	
	cout<<"PROGRAM BALOK"<<endl;
	cout<<"======================================"<<endl;
	cout<<"Masukkan Panjang Balok 	: ";
	cin>>p;
	cout<<"Masukkan Lebar Balok 	: ";
	cin>>l;
	cout<<"Masukkan Tinggi Balok 	: ";
	cin>>t;
	
	volume = p*l*t;
	luas_permukaan = 2*(p*l+p*t+l*t);
	keliling = 4*(p+l+t);
	
	cout<<"======================================"<<endl;
	cout<<"Hasil Volume Balok \t\t: "<<volume<<endl;
	cout<<"Hasil Luas Permukaan Balok \t: "<<luas_permukaan<<endl;
	cout<<"Hasil Keliling Balok \t\t: "<<keliling<<endl;
	cout<<""<<endl;
	cout<<"Ulangi Program (y/n) : ";
	cin>>ulang;
	cout<<"======================================"<<endl;
	cout<<""<<endl;
} while (ulang == "y");
	
}
