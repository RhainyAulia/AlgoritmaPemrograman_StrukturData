#include <iostream>
using namespace std;
int main (){
	
//VOLUME TABUNG
	//1
	float phi = 3.14, V, r, t;
	cout << "menghitung volume tabung \n__________________"<<endl;
	cout << "masukkan r (jari-jari) \t\t= ";
	cin >> r;
	cout << "masukkan tinggi \t\t= ";
	cin >> t;


	V = phi*r*r*t;
	
	cout << "\njari-jari \t\t = " <<r<< "cm"<< endl;
	cout << "tinggi \t\t\t = " <<t<< "cm"<< endl;
	cout << "phi \t\t\t = " <<phi<< " " << endl;
	
	cout << "\nrumus Volume (V) tabung adalah : V = phi*r^2*t" << endl;
	
	cout << "\nmaka, \t\t\t = L = " <<phi<< " * " <<r<< "^2 * " <<t<<endl;
	cout << "volume tabung adalah \t : " <<V<< "cm^3" <<endl;
	
	return 0;
	
}
	
