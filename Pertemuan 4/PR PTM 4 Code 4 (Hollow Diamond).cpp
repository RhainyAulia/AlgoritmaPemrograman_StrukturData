t#include <iostream>
using namespace std;

int main (){
	int a,i,j,k,l;
	cout << "input nilai untuk belah ketupat: ";
	cin >> a;
	cout << endl;
	
	
	//1, segitiga atas
	for (i=1; i<=a; i++){
		for (j=1; j<=a-i ;j++){ 
			cout << "* ";
		}
		
		for (k=1; k<=a-j; k++){ 
			cout << "    ";
		}
		
		for (l=1; l<=a-i; l++){
			cout << "* ";
		}
			if (i != a-1){
			cout << endl;
			}
	}
	
	//2, segitiga bawah
	for (i=a; i>=1; i--){
		for (j=1; j<=a-i; j++) { 
			cout << "* ";
		}
	
		for (k=1; k<=a-j; k++){ 
			cout << "    ";
		}
		
		for (l=1; l<=a-i; l++){
			cout << "* ";
		}
			if (i != a+1){
			cout << endl;
		}
 	}
return 0;
}

