#include <iostream>
// I.S Program Membuat Input & Output
// F.S Menampilkan hasil Input dan Output
 
using namespace std;

int main() {
	char name[900]; // buat variable name dengan type char dengan batas caracter [900]
	
	cout << "Please enter your name : "; 
	
	cin >> name; // buat validasi input 
	
	cout << "Yout name is: " << name << endl; // tampilkan hasil input 
	 
}

 