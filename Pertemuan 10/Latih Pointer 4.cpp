#include <iostream>
using namespace std;

int main (){
	int ilham, *raka, **amir;
	
	ilham = 75;
	
	cout << "Nilai ILHAM = " << ilham << endl;
	raka = &ilham;
	amir = &raka;
	
	cout << "Nilai RAKA Hasil Mengakses ILHAM =";
	cout << *raka << endl;
	cout << "Nilai AMIR HAsil Mengakses ILHAM = ";
	cout << **amir << endl;
	
	getchar(); 
}
