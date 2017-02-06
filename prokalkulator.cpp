#include <iostream>
/* 
	Name : Andri Muhamad Fahmi 
	Jurusan : Informatika
	Makuilah : Algoritma
*/
using namespace std;

int hasiltambah (int a, int b);

int hasilkurang (int a, int b);

int hasilkali (int a, int b);

int hasilbagi (int a, int b);

int hasilpersen (int a, int b);

int main() {
	int a , b;
	int hasil;


	cout << "Masukan bilangan 1 :";
	cin >> a;

	cout << "Masukan bilangan 2 :";
	cin >> b;

	cout << endl;

	hasiltambah(a,b);

	hasilkurang(a,b);

	hasilkali(a,b);

	hasilbagi(a,b);

	hasilpersen(a,b);

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

int hasiltambah(int a,int b){
	
	int hasil = a + b;

	cout << "Hasil + a dan b adalah :" << hasil << endl;	

}


int hasilkurang(int a,int b){
	
	int hasil = a - b;

	cout << "Hasil - a dan b adalah :" << hasil << endl;	

}


int hasilkali(int a,int b){
	
	int hasil = a * b;

	cout << "Hasil * a dan b adalah :" << hasil << endl;	

}


int hasilbagi(int a,int b){
	
	int hasil = a / b;

	cout << "Hasil / a dan b adalah :" << hasil << endl;	

}


int hasilpersen(int a,int b){
	
	int hasil = a % b;

	cout << "Hasil % a dan b adalah :" << hasil << endl;	

}