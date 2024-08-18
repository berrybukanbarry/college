#include <iostream>
using namespace std;

int main(){
	int data;
	string nama[7],status[7];
	int tugas[7],uas[7],uts[7];
	double average[7];
	char grade[7];
	cout<<"Masukkan jumlah data = ";
	cin>>data;
	cout<<""<<endl;
	cin.ignore();
	
	
	for (int a = 0; a < data; a++){
		cout<<"Data ke -"<<a+1<<endl;
		cout<<"Nama = ";
		getline (cin,nama[a]);
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
		
		if (average [a] >= 78){
			grade [a] = 'A';
		}
		else if (average [a] >= 65){
			grade [a] = 'B';
		}
		else if (average [a] >= 60){
			grade [a] = 'C';
		}
		else if (average [a] >= 45){
			grade [a] = 'D';
		}
		else if (average [a] >= 0){
			grade [a] = 'E';
		}
		
		
		
		if (average[a]<=70){
			status[a] = "Tidak Lulus";
		} else {
			status[a] = "Lulus";
		}
	}
	
	cout<<"DAFTAR NILAI MAHASISWA"<<endl;
	cout<<"---------------------------------------------------------------------------------"<<endl;
	cout<<"No	   Nama		  Tugas		UTS	  UAS	 Grade    Status"<<endl;
		cout<<"---------------------------------------------------------------------------------"<<endl;
	
	for (int i = 0; i<data; i++){
		cout<<i+1<<"	"<<nama[i]<<"	   "<<tugas[i]<<"	 	"<<uts[i]<<"	  "<<uas[i]<<"	  "<<grade[i]<<"	  "<<status[i]<<endl;
			cout<<"---------------------------------------------------------------------------------"<<endl;
	}
	
	
}
