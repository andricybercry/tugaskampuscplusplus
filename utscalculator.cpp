
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    float a,b;
    int kode;

    menu :
    cout << "Kalkulator Sederhana C++ \n";
    cout << "XRY-CS.id\n\n";
    cout << "Pilihan Menu : \n";
    cout << "1.Penjumlahan (+)\n";
    cout << "2.Pengurangan (-)\n";
    cout << "3.Perkalian (*)\n";
    cout << "4.Pembagian (/)\n\n";
    cout << "Silahkan masukkan kode menu : ";cin >> kode;
    if (kode > 4 || kode < 1){
        cout << "\nKode yang anda masukkan tidak ada \nSilahkan masukkan ulang kode .";
        system("pause");
        system("cls");
        goto menu;
    }
    else {
        cout << "Masukkan angka pertama : ";cin >> a;
        cout << "Masukkan angka kedua   : ";cin >> b;
        if (kode == 1){
            cout << "\nHasil penjumlahan dari "<<a<<" + "<<b<<" adalah : "<<a+b<<endl;
        }
        else if (kode == 2){
            cout << "\nHasil pengurangan dari "<<a<<" - "<<b<<" adalah : "<<a-b<<endl;
        }
        else if (kode == 3){
            cout << "\nHasil perkalian dari "<<a<<" * "<<b<<" adalah : "<<a*b<<endl;
        }
        else if (kode == 4){
            cout << "\nHasil pembagian dari "<<a<<" / "<<b<<" adalah : "<<a/b<<endl;
        }
    }
    return 0;
}