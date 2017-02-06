#include <iostream>
// I.S Program Operator Aritmatika
// F.S Menampilkan hasil dari Operator Aritmatika

using namespace std;

int main() { // menjalankan function main

	int a = 21; // buat variable a dengan type intejer dengan nilai 21
	int b = 10; // buat variable b dengan type intejer dengan nilai 10
	int c;
  	

  	cout << " Bilangan A = 21 , Bilangan B = 10 "	<< endl;

	c = a + b; // hitung variable a dan b dengan operator tambah
	cout <<" Operator + : "<< c << endl;


	c = a - b; // hitung variable a dan b dengan operator kurang
	cout <<" Operator - : "<< c << endl;


	c = a * b;  // hitung variable a dan b dengan operator kali
	cout <<" Operator * : "<< c << endl; 


	c = a / b;  // hitung variable a dan b dengan operator bagi
	cout << " Operator / : "<< c << endl;


	c = a % b;  // hitung variable a dan b dengan operator sisa
	cout << " Operator % : "<< c << endl;


	c = a++;  // hitung variable a dan b dengan operator incremen
	cout << " Operator ++ : "<< c << endl;


	c = a--;  // hitung variable a dan b dengan operator descemen
	cout << " Operator -- : " << c << endl;

	return 0;

	 
}

 