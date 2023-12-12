//-------------------------------
//Program dengan pernyataan goto
//-------------------------------

#include <iostream>
#include<stdio.h>
#include <conio.h>
using namespace std;

main(){
	int a,b;
	char lagi, atas;
	atas:
	clrsc();
	
	cout << "Masukkan Bilangan = ";
	cin>>a;
	b = a%2;
	
	cout << "Nilai " << a << " % 2 adalah = " << b;
	cout << "\n\nIngin Hitung Lagi? [Y/T] : ";
	lagi = getch();
	
	cout << endl << "=========================================" << endl ;
	
	if(lagi == 'Y' || lagi == 'y'){
		goto atas;
			getch();
	}
	if (lagi == 'T' || lagi == 't'){
		cout << "Program Selesai";
	}
}
