//ATOL
//mengubah string menjadi long integer

#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
	char kata [20];
	float angka, a;
	//clrscr();
	cout << "Masukkan Sembarang angka = ";
	cin>>kata;
	
	angka = atol(kata);
	a = angka + 8;
	
	cout << "Hasil Perubahan ditambah dengan 8 = "<<a;
	getchar();
	
}
