
#include <iostream>
#include <cstdlib>
// I.S Program Kalkulator
// F.S Menampilkan hasil program Kalkulator

using namespace std;

int main() { // Fungsi bawaan Main Jalankan Otomatis

    float a,b; // buat fariable a dan b dengan type Float
    int kode; // buat fariable kode dengan type integer

    kode = 0; // berikan variable kode dengan nilai default 0

    menu :
    cout << "Kalkulator Sederhana C++ \n";
    cout << "UTS C++\n\n";
    cout << "Pilihan Menu : \n";
    cout << "1.Penjumlahan (+)\n";
    cout << "2.Pengurangan (-)\n";
    cout << "3.Perkalian (*)\n";
    cout << "4.Pembagian (/)\n\n"; 
    cout << "5.Perhitungan nilai UTS Mahasiswa (/)\n\n";
    cout << "Silahkan masukkan kode menu : ";cin >> kode;
    if(kode != 0){ // perbandingan jika nilai kode tidak sama dengan 0 maka false akan tampil "kode belum di isi"
        if (kode > 5 || kode < 1){ // pengecekan kode jika melebihi batas 5 maka tidak ada 
            cout << "\nKode yang anda masukkan tidak ada \nSilahkan masukkan ulang kode .";
            system("pause"); // fungsi bawaan pause
            system("cls");
            goto menu; // kebali ke menu
        }
        else {
            if(kode == 5){ // fungsi perbandingan jika nilai kode sama dengan 5 maka true

                cout << "Masukkan Masukan Nilai Mahasiswa : ";cin >> a; // fungsi input variable a
                cout << "Masukkan Masukan Batas Nilai UTS : ";cin >> b; // fungsi input variable b
                if(a >= b){ // perbandingan jika a lebih dari b kama TRUE
                     cout << "\nHasil penjumlahan UTS Mahasiswa "<<a<<" dengan Batas Nilai UTS adalah "<<b<<" maka anda : LULUS"<<endl;
                }else if(a <= b){
                     cout << "\nHasil penjumlahan UTS Mahasiswa "<<a<<" dengan Batas Nilai UTS adalah "<<b<<" maka anda : TIDAK LULUS"<<endl;
                }

            }else{
                cout << "Masukkan angka pertama : ";cin >> a; // fungsi input variable a
                cout << "Masukkan angka kedua   : ";cin >> b; // fungsi input variable b
                if (kode == 1){ // fungsi perbandingan jika nilai kode sama dengan 1 maka true
                    cout << "\nHasil penjumlahan dari "<<a<<" + "<<b<<" adalah : "<<a+b<<endl; // tampilkan hasil operator tambah
                }
                else if (kode == 2){ // fungsi perbandingan jika nilai kode sama dengan 2 maka true
                    cout << "\nHasil pengurangan dari "<<a<<" - "<<b<<" adalah : "<<a-b<<endl; // tampilkan hasil operator kurang
                }
                else if (kode == 3){ // fungsi perbandingan jika nilai kode sama dengan 3 maka true
                    cout << "\nHasil perkalian dari "<<a<<" * "<<b<<" adalah : "<<a*b<<endl;  // tampilkan hasil operator kali
                }
                else if (kode == 4){ // fungsi perbandingan jika nilai kode sama dengan 4 maka true
                    cout << "\nHasil pembagian dari "<<a<<" / "<<b<<" adalah : "<<a/b<<endl;  // tampilkan hasil operator bagi
                }
            }
        }
    }else{
          cout << "\n Kode belum di isi "<< endl;  
    }
    return 0; 
}