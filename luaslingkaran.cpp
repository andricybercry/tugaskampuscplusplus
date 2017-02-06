#include <iostream>
#define PHI 3.14 

// I.S Program mencari ukuran data
// F.S Menampilkan Program hitung luas jari jari

using namespace std;

int main() { // Jalan kan function main

	float jari_jari, luas; // buat variable dengan type float

	jari_jari = 25; // berikan variable jari_jari dengan nilai 25

	luas = 0.5 * PHI * jari_jari * jari_jari;
	cout << "Data Lingkaran : "; 

 	cout << "\n Jari jari : "<< jari_jari;
 	cout << "\n Luas : " << luas;
 	cout << "\n";
	
	return 0;

	 
}

 