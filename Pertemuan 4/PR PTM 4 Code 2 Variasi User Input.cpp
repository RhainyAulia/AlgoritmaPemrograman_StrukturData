#include <iostream>
using namespace std;

int main (){
	
	int x,y,p,q, input ;
	cout << "Masukkan nilai maksimal : ";
	cin >> input;
	cout << endl;
	
	cout << " Looping Bilangan Maju " << endl;
	for (x=1; x<=input; x++){
		cout << x << endl;
	}
		
	cout << "\n===================" << endl;
	
	cout << "\n Looping Bilangan Mundur " << endl;
	for (y=input; y>=1; y--){
		cout << y << endl;
	}
	
	cout << "\n===================" << endl;
	
	cout << "\n Bilangan Genap " << endl;
	
	for (p=1; p<=input; p++){
		if (p%2==0) {
		cout << p << endl;
		}
	}			
	
	cout << "\n===================" << endl;
	
	cout << "\n Bilangan Ganjil " << endl;
	
	for (q=1; q<=input; q++){
		if (q%2==1) {
		cout << q << endl;
		}
	}			
	getchar();
}

