#include <iostream>
// I.S Program Operator Perbandingan
// F.S Menampilkan data perbandingan

using namespace std;

int main() {
	int a = 21; // buat variable a dengan type intejer dengan nilai 21
	int b = 10; // buat variable b dengan type intejer dengan nilai 10
	int c; // buat variable a dengan type intejer
  	
	if(a == b){ // jika variable a dengan b sama maka true
		cout << "a sama dengan b" << endl; // True
	}else{
		cout << "a tidak sama dengan b" << endl;
	} 

	if(a < b){ // jika variable a lebih kecil dari b maka true
		cout << "a lebih kecil dari b" << endl;  // True
	}else{
		cout << "a tidak lebih kecil dari b" << endl;
	}

	if(a > b){  // jika variable a lebih besar dari b maka true
		cout << "a lebih besar dari b" << endl;  // True
	}else{
		cout << "a tidak lebih besar dari b" << endl;
	}


	if(b <= a ){ // jika variable b kurang dari a maka true
		cout << "b kurang dari a" << endl;  // True
	}

	if(a >= b){ // jika variable lebih besar dari b maka true
		cout << "a lebih besar dari b" << endl;  // True
	} 
 

	return 0;

	 
}

 