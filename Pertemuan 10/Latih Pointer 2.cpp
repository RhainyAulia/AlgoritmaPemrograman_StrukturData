#include <iostream>
using namespace std;

void nama (string *b){
	cout << "Alamat Nama : " << &b << endl;
	cout << "Nama : " << *b;
}

int main(){
	
	string a;
	cout << "Masukkan Kata : ";
	cin >> a;
	nama (&a);
}
