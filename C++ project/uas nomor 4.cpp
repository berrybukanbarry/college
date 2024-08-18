#include <iostream>
#include <cctype> 
#include <string>
#include <set>

using namespace std;

void hitungJumlahKonsonanVokalNumerik(const string& kalimat, char hurufDicari) {
    int jumlahKonsonan = 0;
    int jumlahVokal = 0;
    int jumlahNumerik = 0;
    int jumlahHurufDicari = 0;

    set<char> hurufVokal;
    set<char> hurufKonsonan;

    for (char karakter : kalimat) {
        
        if (isalpha(karakter)) {
            
            char lowercaseChar = tolower(karakter);
            if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' ||
                lowercaseChar == 'o' || lowercaseChar == 'u') {
                hurufVokal.insert(lowercaseChar);
            } else {
                hurufKonsonan.insert(lowercaseChar);
            }

           
            if (lowercaseChar == tolower(hurufDicari)) {
                jumlahHurufDicari++;
            }
        }
        
        else if (isdigit(karakter)) {
            jumlahNumerik++;
        }
    }

    
    cout << "Jumlah Konsonan: " << jumlahKonsonan << endl;
    cout << "Jumlah Vokal: " << jumlahVokal << endl;
    cout << "Huruf Vokal yang Ada: ";
    for (char vokal : hurufVokal) {
        cout << vokal << " ";
    }
    cout << endl;
    cout << "Huruf Konsonan yang Ada: ";
    for (char konsonan : hurufKonsonan) {
        cout << konsonan << " ";
    }
    cout << endl;
    cout << "Jumlah Numerik: " << jumlahNumerik << endl;
    cout << "Jumlah huruf '" << hurufDicari << "': " << jumlahHurufDicari << endl;
}

int main() {
    string kalimat;
    char hurufDicari;

    
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> hurufDicari;

    
    hitungJumlahKonsonanVokalNumerik(kalimat, hurufDicari);

    return 0;
}
