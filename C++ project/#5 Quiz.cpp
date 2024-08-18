#include <iostream>
using namespace std;

//KELILING BALOK
float keliling_balok (float p,float l,float t){
	return 4 *(p+l+t);
}

//KELILING KUBUS
float keliling_kubus (float s){
	return 12*s;
}

//LUAS PERMUKAAN BALOK
float luas_permukaan_balok (float p,float l,float t){
	return 2*(p*l+p*t+l*t);
}

//LUAS PERMUKAAN KUBUS
float luas_permukaan_kubus (float s){
	return 6*s*s;
}

//VOLIME TABUNG
float volume_tabung (float r,float t){
	return 3,14*r*r*t;
}

int main(){
	float p,l,t,s,r;
	int hasil,angka;
	string nama,nim,mata_kuliah,sesi_kelas,ulang;
	do{
	cout<<"========================================================"<<endl;
	cout<<"Nama : ";
	getline(cin,nama);
	cout<<"NIM : ";
	getline(cin,nim);
	cout<<"Mata Kuliah : ";
	getline(cin,mata_kuliah);
	cout<<"Sesi Kelas : ";
	getline(cin,sesi_kelas);
	cout<<"========================================================"<<endl;
	cout<<""<<endl;
	cout<<"Menu yang tersedia"<<endl;
	cout<<"1.Hitung Keliling Balok"<<endl;
	cout<<"2.Hitung Keliling kubus"<<endl;
	cout<<"3.Hitung Luas Permukaan Balok"<<endl;
	cout<<"4.Hitung Luas Permukaan Kubus"<<endl	;
	cout<<"5.Hitung Volume Tabung"<<endl;
	cout<<""<<endl;
	cout<<"Masukkan Pilihan Anda [1/2/3/4/5]: ";
	cin>>angka; 
	cout<<"========================================================"<<endl;

	
	switch (angka){
		case 1 :
				cout<<"Masukkan panjang : ";
				cin>>p;
				cout<<"Masukkan Luas : ";
				cin>>l;
				cout<<"Masukkan Tinggi : ";
				cin>>t;
				cout<<""<<endl;
			hasil = keliling_balok(p,l,t);
			if (hasil % 2 == 0){
				cout<<"Hasil perhitungan pilihan nomor 1 adalah "<<hasil<<" dan merupakan bilangan genap"<<endl;
			}
			else{
				cout<<"Hasil perhitungan pilihan nomor 1 adalah "<<hasil<<" dan merupakan bilangan ganjil"<<endl;
			}
			break;
		case 2 :
				cout<<"Masukka Sisi : ";
				cin>>s;
				cout<<""<<endl;
			hasil = keliling_kubus(s);
			if (hasil % 2 == 0){
				cout<<"Hasil perhitungan pilihan nomor 2 adalah "<<hasil<<" dan merupakan bilangan genap"<<endl;
			}
			else{
				cout<<"Hasil perhitungan pilihan nomor 2 adalah "<<hasil<<" dan merupakan bilangan ganjil"<<endl;
			}
			break;
		case 3 :
				cout<<"Masukkan panjang : ";
				cin>>p;
				cout<<"Masukkan Luas : ";
				cin>>l;
				cout<<"Masukkan Tinggi : ";
				cin>>t;	
				cout<<""<<endl;
			hasil = luas_permukaan_balok (p,l,t);
			if (hasil % 2 == 0){
				cout<<"Hasil perhitungan pilihan nomor 3 adalah "<<hasil<<" dan merupakan bilangan genap"<<endl;
			}
			else{
				cout<<"Hasil perhitungan pilihan nomor 3 adalah "<<hasil<<" dan merupakan bilangan ganjil"<<endl;
			}
			break;
		case 4 :
				cout<<"Masukkan Sisi : ";
				cin>>s;
				cout<<""<<endl;
			hasil = luas_permukaan_kubus (s);
			if (hasil % 2 == 0){
				cout<<"Hasil perhitungan pilihan nomor 4 adalah "<<hasil<<" dan merupakan bilangan genap"<<endl;
			}
			else{
				cout<<"Hasil perhitungan pilihan nomor 4 adalah "<<hasil<<" dan merupakan bilangan ganjil"<<endl;
			}
			break;
		case 5 :
				cout<<"Masukkan Rusuk : ";
				cin>>r;
				cout<<"Masukkan Tinggi : ";
				cin>>t;
				cout<<""<<endl;
			hasil = volume_tabung (r,t);
			if (hasil % 2 == 0){
				cout<<"Hasil perhitungan pilihan nomor 5 adalah "<<hasil<<" dan merupakan bilangan genap"<<endl;
			}
			else{
				cout<<"Hasil perhitungan pilihan nomor 5 adalah "<<hasil<<" dan merupakan bilangan ganjil"<<endl;
			}
			break;
			default :
				cout<<""<<endl;
				cout<<"MENU YANG ANDA MASUKKAN TIDAK ADAAAAAAAAAAAA!!!!!!!!!!"<<endl;
	}
			
			cout<<"Ulangi Proses (y/n) : ";
			cin>>ulang;	
			cout<<""<<endl;			
			}while (ulang == "y");
			cout<<"PROGRAM ANDA SELESAI!!!!";
		
	
	
	
	
}

