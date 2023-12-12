//-------------------------------
//Perulangan FOR dengan break
//-------------------------------

#include <iostream>
#include<stdio.h>
#include <conio.h>
using namespace std;

main (){
	int a=3, b=2, c=1, bil;
	//clrscr();
	
	cout << "Bil-A \t| Bil-B | Bil-C\n";
	cout << "------------------------";
	
	for (bil=1; bil<=10; ++bil){
		a+=b; b+=c; c+=2;
		cout << "\n" << a << "\t| " << b <<"\t| " <<c;
		
		if (c==13)
		break;
	}
	getch();
	return 0;
}
