#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double bilangan;
	
	cout<<"\t\t\t========================="<<endl;
	cout<<"\t\t\t    PROGRAM PEMBULATAN"<<endl;
	cout<<"\t\t\t========================="<<endl;
	
	cout<<""<<endl;
    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    int ribuan = static_cast<int>(bilangan / 1000);
    int sisa = static_cast<int>(bilangan) % 1000;

    if (sisa < 500) {
        bilangan = ribuan * 1000;
    } else {
        bilangan = (ribuan + 1) * 1000;
    }

    cout << "Hasil pembulatan: " << static_cast<int>(bilangan) << endl;

    return 0;
}
