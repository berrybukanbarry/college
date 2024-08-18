#include <iostream>

using namespace std;

int main(){
	struct	{
		string nama;
		int uts,uas,nim;
	}mhs1,mhs2,mhs3,mhs4,mhs5;
	
	mhs1.nama = "UDIN";
	mhs1.nim  = 407;
	mhs1.uts  = 77;
	mhs1.uas  = 90;
	
	mhs2.nama = "USEP";
	mhs2.nim  = 437;
	mhs2.uts  = 80;
	mhs2.uas  = 60;
	
	mhs3.nama = "UCUP";
	mhs3.nim  = 447;
	mhs3.uts  = 70;
	mhs3.uas  = 50;
	
	mhs4.nama = "UCOK";
	mhs4.nim  = 907;
	mhs4.uts  = 88;
	mhs4.uas  = 100;
	
	mhs5.nama = "ADUL";
	mhs5.nim  = 457;
	mhs5.uts  = 44;
	mhs5.uas  = 89;
	
	cout<<mhs1.nama<<" "<<"NIM "<<mhs1.nim<<" "<<"Nilai UTS "<<mhs1.uts<<" "<<"Nilai UAS "<<mhs1.uas<<endl;
	cout<<mhs2.nama<<" "<<"NIM "<<mhs2.nim<<" "<<"Nilai UTS "<<mhs2.uts<<" "<<"Nilai UAS "<<mhs2.uas<<endl;
	cout<<mhs3.nama<<" "<<"NIM "<<mhs3.nim<<" "<<"Nilai UTS "<<mhs3.uts<<" "<<"Nilai UAS "<<mhs3.uas<<endl;
	cout<<mhs4.nama<<" "<<"NIM "<<mhs4.nim<<" "<<"Nilai UTS "<<mhs4.uts<<" "<<"Nilai UAS "<<mhs4.uas<<endl;
	cout<<mhs5.nama<<" "<<"NIM "<<mhs5.nim<<" "<<"Nilai UTS "<<mhs5.uts<<" "<<"Nilai UAS "<<mhs5.uas<<endl;
}
