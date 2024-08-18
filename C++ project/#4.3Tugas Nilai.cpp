#include <iostream>
using namespace std;

int main () {
	
	string nama,nim,matkul,ket;
	int nilai_angka;
	char nilai_huruf;
	
	cout<<"NILAI"<<endl;
	cout<<"========================================================"<<endl;
	cout<<"Masukkan Nama anda : ";
	cin>>nama;
	cout<<"Masukkan Nim Anda : ";
	cin>>nim;
	cout<<"Masukkan Matkul Anda : ";
	cin>>matkul;
	cout<<"Masukkan Nilai Anda (100-0): ";
	cin>>nilai_angka; 
	cout<<"========================================================"<<endl;
		
	if (nilai_angka >=0 and nilai_angka <=50) {
		cout<<"E"<<endl;
	}
	else if (nilai_angka >=51 and nilai_angka <=60) {
		cout<<"D"<<endl;
	}
	else if (nilai_angka >=61 and nilai_angka <=70) {
		cout<<"C"<<endl;
	}
	else if (nilai_angka >=71 and nilai_angka <=85) {
		cout<<"B"<<endl;
	}
	else if (nilai_angka >=86 and nilai_angka <=100) {
		cout<<"A"<<endl;
	}
	
	if (nilai_angka >61 and nilai_angka <=100) {
		cout<<"LULUS!!"<<endl;
	}
	
	if (nilai_angka >0 and nilai_angka <=61) {
		cout<<"TIDAK LULUS!!"<<endl;
	}
	
	cout<<"========================================================"<<endl;
	cout<<nama<<endl;
	cout<<nim<<endl;
	cout<<matkul<<endl;
	
}
