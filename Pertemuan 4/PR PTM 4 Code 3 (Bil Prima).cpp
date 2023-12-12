#include <iostream>
using namespace std;

int main(){
	
	int value, patokan;
	bool bil_prima = true;
	
	cout << "Input sebuah nilai = ";
	cin >> value;
	cout << "\n====================" << endl;
	
	//karena 0 dan 1 bukan bilangan prima
	if (value == 0 || value == 1 ){
		bil_prima = false;
	}
	
	//bilangan >=2
	else {
		for (patokan = 2; patokan <= value/2 ; patokan++){
			if (value % patokan == 0){
				bil_prima = false;
				break;
			}
		}
	}
	
	cout << endl;
	
	//penentuan
	if (bil_prima){
		cout << value <<" adalah bilangan prima.";
	}
	
	else {
		cout << value << " bukan bilangan prima.";
	}
	
	return 0;
}
