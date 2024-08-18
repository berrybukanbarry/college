#include <iostream>
using namespace std;

int main(){
	string nama;
	int kode,jumlah,total,uang,kembalian;
	
	cout<<"\t\t\tSelamat Datang"<<endl;
	cout<<"\t\t\tDi Restoran UEU"<<endl;
	cout<<"Menu Makanan : "<<endl;
	cout<<"1. Nasi Goreng Katsu\t- Rp25000"<<endl;
	cout<<"2. Ayam Bakar Madu\t- Rp20000"<<endl;
	cout<<"3. Mie Ayam Spesial\t- Rp22000"<<endl;
	cout<<"4. Bakso Malang\t\t- Rp18000"<<endl;
	cout<<"5. Spaghetti Bolognese\t- Rp15000"<<endl;
	cout<<"============================================================="<<endl;
	cout<<"Nama Pelanggan : ";
	cin>>nama;
	cout<<"Masukkan Kode Pesanan (1, 2, 3, 4, 5) : ";
	cin>>kode;
	if (kode == 1){
		cout<<"Menu Makanan yang dipesan Adalah Nasi Goreng Katsu"<<endl;
		cout<<"Jumlah Makana Dipesan : ";
		cin>>jumlah;
		total = jumlah*25000;
		cout<<"Total : "<<total<<endl;
		cout<<"============================================================="<<endl;
		cout<<"Uang yang dibayarkan : ";
		cin>>uang;
		kembalian = uang - total;
		if (uang<total){
			cout<<"MAAF UANG ANDA KURANG"<<endl;
		}
		else {
			cout<<"Kembalian : "<<kembalian<<endl;
		}
	}
	else if (kode == 2){
		cout<<"Menu Makanan yang dipesan Adalah Ayam Bakar Madu"<<endl;
		cout<<"Jumlah Makana Dipesan : ";
		cin>>jumlah;
		total = jumlah*20000;
		cout<<"Total : "<<total<<endl;
		cout<<"============================================================="<<endl;
		cout<<"Uang yang dibayarkan : ";
		cin>>uang;
		kembalian = uang - total;
		if (uang<total){
			cout<<"MAAF UANG ANDA KURANG"<<endl;
		}
		else {
			cout<<"Kembalian : "<<kembalian<<endl;
		}
	}
	else if (kode == 3){
		cout<<"Menu Makanan yang dipesan Adalah Mie Ayam Spesial"<<endl;
		cout<<"Jumlah Makana Dipesan : ";
		cin>>jumlah;
		total = jumlah*22000;
		cout<<"Total : "<<total<<endl;
		cout<<"============================================================="<<endl;
		cout<<"Uang yang dibayarkan : ";
		cin>>uang;
		kembalian = uang - total;
		if (uang<total){
			cout<<"MAAF UANG ANDA KURANG"<<endl;
		}
		else {
			cout<<"Kembalian : "<<kembalian<<endl;
		}
	}
	else if (kode == 4){
		cout<<"Menu Makanan yang dipesan Adalah Bakso Malang"<<endl;
		cout<<"Jumlah Makana Dipesan : ";
		cin>>jumlah;
		total = jumlah*18000;
		cout<<"Total : "<<total<<endl;
		cout<<"============================================================="<<endl;
		cout<<"Uang yang dibayarkan : ";
		cin>>uang;
		kembalian = uang - total;
		if (uang<total){
			cout<<"MAAF UANG ANDA KURANG"<<endl;
		}
		else {
			cout<<"Kembalian : "<<kembalian<<endl;
		}
	}
	else if (kode == 5){
		cout<<"Menu Makanan yang dipesan Adalah Spaghetti Bolognese"<<endl;
		cout<<"Jumlah Makana Dipesan : ";
		cin>>jumlah;
		total = jumlah*15000;
		cout<<"Total : "<<total<<endl;
		cout<<"============================================================="<<endl;
		cout<<"Uang yang dibayarkan : ";
		cin>>uang;
		kembalian = uang - total;
		if (uang<total){
			cout<<"MAAF UANG ANDA KURANG"<<endl;
		}
		else {
			cout<<"Kembalian : "<<kembalian<<endl;
		}
	}
	else {
		cout<<"KODE YANG ANDA PILIH TIDAK ADAAAAAAAAAAAA!!!!!!!!!!!!"<<endl;
	}
	
	
	
	
	
}
