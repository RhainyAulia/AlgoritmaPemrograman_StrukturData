//string
//strcpy () string.h
//memanggil ulang string asal ke string bawahnya

#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char huruf[20];
	char pindah [20]; //kedua array char harus sama
	//clrscr();
	
	cout << "Masukkan Sembarang Kata = ";
	cin >> huruf; //string awal
	
	//proses
	
	strcpy(pindah, huruf);
	cout << "Pemindahannya = " << pindah; //pemindahannya
	getchar();
}
