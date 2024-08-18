#include <iostream>
using namespace std;

int main(){								
	string NPetugas,NCostumer,KWisata,KTujuan,KGroup,PWisata,tanggal;
	int HPaket ,BAkomodasi,Total;
	cout<<"\t\t\t\tTravel Agent 'SENENG TERUS'"<<endl;
	cout<<""<<endl;
	cout<<"\t\t\t\t==========================="<<endl;
	
	cout<<""<<endl;
	cout<<"Nama Petugas\t: ";
	getline (cin,NPetugas);
	cout<<"Nama Costumer\t: ";
	getline (cin,NCostumer);
	cout<<"Tanggal Keberangkatan\t:";
	getline (cin,tanggal);
	cout<<"Pilih Kode Tujuan Wisata [JG/BL/LB]:";
	cin>>KTujuan;								
	
	if (KTujuan == "JG"){
		KWisata = "JOGJAKARTA";
	}
	else if (KTujuan == "BL"){
		KWisata = "BALI";
	}
	else if (KTujuan == "LB"){
		KWisata = "LOMBOK";
	}					
	else {
		cout<<"KODE TUJUAN TIDAK ADA!!!!!!!!!!!!"<<endl;
	}										
	
	cout<<"Pilih Paket Wisata [F/C]: ";
	cin>>KGroup;	
	
	if (KGroup == "F"){
		PWisata = "Family";
		if (KTujuan == "JG"){
			HPaket = 1500000;
			BAkomodasi = 0.05*HPaket;
			Total = BAkomodasi + HPaket;	
		}	
		else if (KTujuan == "BL"){
			HPaket = 4500000;
			BAkomodasi = 0.15*HPaket;
			Total = BAkomodasi + HPaket;
		}
		else if (KTujuan == "LB"){
			HPaket = 5000000;
			BAkomodasi = 0.1*HPaket;
			Total = BAkomodasi + HPaket;
		}	
	}
	else if (KGroup =="C"){
		PWisata = "Company";
		if (KTujuan == "JG"){
			HPaket = 3000000;
			BAkomodasi = 0.1*HPaket;
			Total = BAkomodasi + HPaket;
		}
		else if (KTujuan == "BL"){
			HPaket = 7500000;
			BAkomodasi = 0.05*HPaket;
			Total = BAkomodasi + HPaket;
		}
		else if (KTujuan == "LB"){
			HPaket = 8000000;
			BAkomodasi = 0.05*HPaket;
			Total = BAkomodasi + HPaket;
		}
	}
	else {
		cout<<"PAKET WISATA TIDAK ADA!!!!!!!!!!!!!!!"<<endl;
	}						
		cout<<""<<endl;
		cout<<"========================================================================"<<endl;
		cout<<"========================================================================"<<endl;
		cout<<""<<endl;
	cout<<"\t\t\t\tBukti Pemesanan Paket Liburan"<<endl;
	cout<<""<<endl;
	cout<<"\t\t\t\t Travel Agent 'SENENG TERUS'"<<endl;	
	cout<<"\t\t\t\t ==========================="<<endl;
	cout<<""<<endl;
	cout<<"Nama Petugas\t\t: "<<NPetugas<<endl;
	cout<<"Nama Costumer\t\t: "<<NCostumer<<endl;
	cout<<"Tgl.Keberangkatan\t: "<<tanggal<<endl;
	cout<<"Tujuan Wisata\t\t: "<<KWisata<<endl;
	cout<<"Paket Wisata\t\t: "<<PWisata<<endl;
	cout<<"Harga\t\t\t: "<<HPaket<<endl;
	cout<<"Biaya Akomodasi\t\t: "<<BAkomodasi<<endl;
	cout<<"Total Biaya\t\t: "<<Total<<endl;																																														
	
	
}
