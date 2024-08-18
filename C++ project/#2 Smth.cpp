#include <iostream>
using namespace std;

int main () {
	int a,b,tambah,kurang,kali,bagi;
	
	cout<<"Membuat kalkulator sederhana"<<endl;
	cout<<"======================================"<<endl;
	cout<<"Masukkan nila A :"<<endl;
	cin>>a;
	cout<<"Masukkan nila B :"<<endl;
	cin>>b;
	
	tambah = a + b;
	kurang = a - b;
	kali = a * b;
	bagi = a / b;
	
	cout<<"======================================"<<endl;
	cout<<"Hasil penjumlahan : "<<tambah<<endl;
	cout<<"Hasil pengurangan : "<<kurang<<endl;
	cout<<"Hasil perkalian : "<<kali<<endl;
	cout<<"Hasil pembagian : "<<bagi<<endl;
}
