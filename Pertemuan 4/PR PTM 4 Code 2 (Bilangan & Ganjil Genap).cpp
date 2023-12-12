#include <iostream>
using namespace std;

int main (){
	
	int x,y,p,q ;
	
	cout << " Looping Bilangan Maju " << endl;
	for (x=1; x<=20; x++){
		cout << x << endl;
	}
		
	cout << "\n===================" << endl;
	
	cout << "\n Looping Bilangan Mundur " << endl;
	for (y=20; y>=1; y--){
		cout << y << endl;
	}
	
	cout << "\n===================" << endl;
	
	cout << "\n Bilangan Genap " << endl;
	
	for (p=1; p<=20; p++){
		if (p%2==0) {
		cout << p << endl;
		}
	}			
	
	cout << "\n===================" << endl;
	
	cout << "\n Bilangan Ganjil " << endl;
	
	for (q=1; q<=20; q++){
		if (q%2==1) {
		cout << q << endl;
		}
	}			
	getchar();
}

