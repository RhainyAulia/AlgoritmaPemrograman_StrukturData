#include <iostream>
using namespace std;
int main (){
	
//lUAS LINGKARAN
	//2
	float phi = 3.14, L, d, r;
	cout << "menghitung luas lingkaran \n__________________"<<endl;
	cout << "masukkan diameter \t= ";
	cin >> d;
	
	r = d/2;
	
	cout << "maka jari-jarinya adalah = " <<r<< " cm"<<endl;

	L = phi*(d/2)*(d/2);
	
	cout << "phi \t\t\t = " <<phi<< " " << endl;
	cout << "rumus luas lingkaran \t = L = phi * r^2" << endl;
	cout << "maka, \t\t\t = L = " <<phi<< " * " <<r<< "^2" <<endl;
	cout << "luas lingkaran adalah \t : " <<L<< "cm" <<endl;
	
	return 0;
	
}
	
