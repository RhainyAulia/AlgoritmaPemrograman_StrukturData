#include <iostream>
using namespace std;
int main (){
	
//Cylinder Volume
	//2
	float phi = 3.14, V, d, h;
	cout << "count the cylinder volume \n__________________"<<endl;
	cout << "enter the diameter \t= ";	
	cin >> d;
	
	cout << "enter the height \t= ";
	cin >> h;

	V = phi*(d/2)*(d/2)*h;
	
	cout << "\ncircle radius \t\t = " <<d/2<< "cm"<< endl;
	cout << "height \t\t\t = " <<h<< "cm"<< endl;
	cout << "phi \t\t\t = " <<phi<< " " << endl;
	
	cout << "\n Cylinder Volume (V) formula is : V = phi*r^2*h" << endl;
	
	cout << "\nthen, \t\t\t = L = " <<phi<< " * " <<d/2<< "^2 * " <<h<<endl;
	cout << "the cylinder volume is \t : " <<V<< "cm^3" <<endl;
	
	return 0;
}

