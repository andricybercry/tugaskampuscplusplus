#include <iostream>
// I.S Program mencari ukuran data
// F.S Menampilkan operator Logika / Boolean
 
using namespace std;

int main() { // menjalankan function main


	int a = 21; // buat variable a dengan type inejer dengan nilai 21
	int b = 10;  // buat variable a dengan type inejer dengan nilai 21
	int c;
  	
	if(a && b){ // jika a dan b sama maka TRUE
		cout << "TRUE" << endl;
	}else{
		cout << "FALSE" << endl;
	}

	if(a != b){ // jika a dan b tidak sama maka FALSE
		cout << "TRUE" << endl;
	}else{
		cout << "FALSE" << endl;
	}

	if(a || b){ // jika a atau b sama
		cout << "TRUE" << endl;
	}else{
		cout << "FALSE" << endl;
	}
 
 

	return 0;

	 
}

 