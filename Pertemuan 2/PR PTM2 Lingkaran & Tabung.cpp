#include <iostream>
using namespace std;
int main (){
	
//LUAS LINGKARAN & VOLUME TABUNG
	float phi = 3.14, L, V, t, d, r;
	cout << "menghitung luas lingkaran & volume tabung \n__________________________________"<<endl;
	cout << "masukkan tinggi \t = ";
	cin >> t;
	cout << "masukkan diameter \t = ";
	cin >> d;
	
	r = d/2;
	
	cout << "maka jari-jarinya adalah = " <<r<< " cm"<<endl;

	L = phi*r*r;
	V = phi*r*r*t;
	
	cout << "\nMenghitung Luas Lingkaran";
	cout << "\nrumus Luas Lingkaran \t = L = phi*r^2"<<endl;
	cout << "maka, Luas \t\t = " <<phi<< "*" <<r<< "^2"<<endl;
	cout << "Luas lingkaran \t\t = " <<L<< " cm^2"<<endl;
	
	cout << "\nMenghitung Volume Tabung";
	cout << "\rumus Volume Tabung \t = V = phi*r^2*t"<<endl;
	cout << "maka, Volume \t\t = " <<phi<< " * " <<r<< "^2 * " <<t<<endl;
	cout << "Volume Tabung \t\t = " <<V<< " cm^3"<<endl;
	
	return 0;
	
}
