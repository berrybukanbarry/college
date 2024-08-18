#include <iostream>
using namespace std;

int main(){
	int data;
	string nama[5],status[5];
	int tugas[5],uas[5],uts[5];
	double average[5];
	cout<<"Masukkan jumlah data = ";
	cin>>data;
	cout<<""<<endl;
	cin.ignore();
	
	
	for (int a = 0; a < data; a++){
		cout<<"Data ke -"<<a+1<<endl;
		cout<<"Nama = ";
		cin>>nama[a];
		cout<<"Nilai Tugas = ";
		cin>>tugas[a];
		cout<<"Nilai UTS  = ";
		cin>>uts[a];	
		cout<<"Nilai UAS = ";
		cin>>uas[a];
		cout<<""<<endl;
		cout<<""<<endl;
		cin.ignore();
		
		average [a] = (tugas[a]+uts[a]+uas[a])/3;
		
		if (average[a]<=70){
			status[a] = "Tidak Lulus";
		} else {
			status[a] = "Lulus";
		}
	}
	
	cout<<"DAFTAR NILAI MAHASISWA"<<endl;
	cout<<"------------------------------------------------------------------------------------"<<endl;
	cout<<"No	Nama	 Tugas		UTS		UAS		Grade    Status"<<endl;
	cout<<"------------------------------------------------------------------------------------"<<endl;
	
	for (int i = 0; i<data; i++){
		cout<<i+1<<"	"<<nama[i]<<"	  "<<tugas[i]<<"	 	"<<uts[i]<<"		"<<uas[i]<<"		 "<<grade[i]<<"	   "<<status[i]<<endl;
		cout<<"------------------------------------------------------------------------------------"<<endl;
	}
	
	
}
