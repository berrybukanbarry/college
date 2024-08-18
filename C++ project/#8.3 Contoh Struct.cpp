#include <iostream>
using namespace std;
struct nilai
{
	char nim [15];
	char nama [50];
	int n_tugas, n_uts, n_uas, n_akhir;
	char grade;
	
};
int main()
{
	nilai mhs;
	string ulang;
	cout<<"==================================="<<endl;
	cout<<"Contoh Program Penilaian Mahasiswa!"<<endl;
	cout<<"==================================="<<endl;
	do{
	
	cout<<"NIM : ";cin.getline(mhs.nim,15);
	cout<<"Nama : ";cin.getline(mhs.nama,50);
	cout<<"Nilai Tugas :";cin>>mhs.n_tugas;
	cout<<"Nilai UTS :";cin>>mhs.n_uts;
	cout<<"Nilai UAS :";cin>>mhs.n_uas;
	
mhs.n_akhir = (mhs.n_tugas*20/100)+(mhs.n_uts*35/100)+(mhs.n_uas*45/100);

if(mhs.n_akhir>=85)
{ 
mhs.grade='A';
}
else if (mhs.n_akhir>=70)
{
mhs.grade='B';
}
else if (mhs.n_akhir>=55)
{
mhs.grade='C';
}
else if (mhs.n_akhir>=40)
{
mhs.grade='D';
}
else
{
mhs.grade='E';
}

	cout<<"\n==================================="<<endl;
	cout<<"Hasil Nilai Mahasiswa"<<endl;;
	cout<<"==================================="<<endl;
	cout<<"NIM : "<< mhs.nim<<endl;
	cout<<"Nama : "<< mhs.nama<<endl;
	cout<<"Nilai Tugas : "<< mhs.n_tugas<<endl;
	cout<<"Nilai UTS : "<< mhs.n_uts<<endl;
	cout<<"Nilai UAS : "<< mhs.n_uas<<endl;
	cout<<"Mendapatkan Nilai Akhir : "<<mhs.n_akhir<<endl;
	cout<<"Nilai Huruf (Grade) : "<<mhs.grade<<endl;
	cout<<""<<endl;
	cout<<"ulang program (y/n) : ";
	cin>>ulang;
	cout<<"==================================="<<endl;
	cout<<""<<endl;
	cin.ignore();
}while (ulang == "y");
	cout<<"THANKS MY FRIEND";
}



