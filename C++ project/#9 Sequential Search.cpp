#include <iostream>
using namespace std;

int main(){
	int i;
	int n;
	int cari,ketemu=0;
	int A[100];
	
	cout<<"PROGRAM SEARCHING LINEAR\n";
	cout<<"---------------------------"<<endl;
	
	cout<<"Masukan Banyak Data : ";
	cin>>n;
	cout<<endl;
	
	for (i=1;i<=n;i++){
		cout<<"Masukkan data ke -"<<i<<" : ";
		cin>>A[i];
	}
	
	cout<<endl;
	cout<<"Input Bilangan Yang Dicari : ";
	cin>>cari;
	cout<<"-----------------------------"<<endl;
	cout<<endl;
	
	for(i=0;i<=n;i++){
		if (A[i]==cari){
			ketemu=1;
			cout<<"Data Ditemukan Pada Indek ke-"<<i;
		}
	}
	if (ketemu==0){
		cout<<"Data Tidak Ditemukan";
	}
	
}
