#include <iostream>
using namespace std;
int main (){
	
//lUAS LINGKARAN
	//1
	float phi = 3.14, L, r;
	cout << "menghitung luas lingkaran \n__________________"<<endl;
	cout << "masukkan r (jari-jari) \t= ";
	cin >> r;

	L = phi*r*r;
	
	cout << "\njari-jari \t\t = " <<r<< "cm"<< endl;
	cout << "phi \t\t\t = " <<phi<< " " << endl;
	cout << "rumus luas lingkaran \t = L = phi * r^2" << endl;
	cout << "maka, \t\t\t = L = " <<phi<< " * " <<r<< "^2" <<endl;
	cout << "luas lingkaran adalah \t : " <<L<< "cm" <<endl;
	
	return 0;
	
}
	
