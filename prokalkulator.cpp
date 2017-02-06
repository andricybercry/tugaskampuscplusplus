#include <iostream>
// I.S Program Operator Perbandingan
// F.S Menampilkan data perbandingan

using namespace std;

int hasiltambah (int a, int b); // buat prototype function hasil tambah
 
int hasilkurang (int a, int b); // buat prototype function hasil kurang

int hasilkali (int a, int b); // buat prototype function hasil kali

int hasilbagi (int a, int b); // buat prototype function hasil bagi

int hasilpersen (int a, int b); // buat prototype function hasil persen

int main() {

	int a , b; // buat variable a dan b dengan type integer
	int hasil; // buat variable hasil dengan type integer


	cout << "Masukan bilangan 1 :";
	cin >> a; // buat falidasi inputan untuk variable a

	cout << "Masukan bilangan 2 :";
	cin >> b; // buat falidsi inputan untuk variable b 

	cout << endl; 

	hasiltambah(a,b); // jalankan fungsi buatan hasil tambah

	hasilkurang(a,b); // jalankan fungsi buatan hasil kurang

	hasilkali(a,b);  // jalankan fungsi buatan hasil kali

	hasilbagi(a,b); // jalankan fungsi buatan hasil bagi

	hasilpersen(a,b);  // jalankan fungsi buatan hasil persen

	// hasil = a + b;

	// cout << "Hasil + a dan b adalah :" << hasil << endl;


	// hasil = a - b;

	// cout << "Hasil - a dan b adalah :" << hasil << endl;


	// hasil = a * b;

	// cout << "Hasil * a dan b adalah :" << hasil << endl;


	// hasil = a / b;

	// cout << "Hasil / a dan b adalah :" << hasil << endl;


	// hasil = a % b;

	// cout << "Hasil % a dan b adalah :" << hasil << endl;

	return 0;

	 
}

int hasiltambah(int a,int b){ // buat fungsi buatan hasil tambah
	
	int hasil = a + b; // hitung variable a dan b dengan operator tambah

	cout << "Hasil + a dan b adalah :" << hasil << endl; // tampilkan variable hasil

}


int hasilkurang(int a,int b){  // buat fungsi buatan hasil kurang
	
	int hasil = a - b;  // hitung variable a dan b dengan operator kurang

	cout << "Hasil - a dan b adalah :" << hasil << endl;   // tampilkan variable hasil
 
}


int hasilkali(int a,int b){  // buat fungsi buatan hasil kali
	
	int hasil = a * b;  // hitung variable a dan b dengan operator kali

	cout << "Hasil * a dan b adalah :" << hasil << endl;   // tampilkan variable hasil

}


int hasilbagi(int a,int b){  // buat fungsi buatan hasil bagi
	
	int hasil = a / b;  // hitung variable a dan b dengan operator bagi

	cout << "Hasil / a dan b adalah :" << hasil << endl;  // tampilkan variable hasil	

}


int hasilpersen(int a,int b){  // buat fungsi buatan hasil persen
	
	int hasil = a % b;  // hitung variable a dan b dengan operator persen

	cout << "Hasil % a dan b adalah :" << hasil << endl;	 // tampilkan variable hasil

}