#include <iostream>
using namespace std;

int kali (int a, int b){
	int hasil;
	hasil = a * b;
	return hasil;
}

int main(){
	int hasil, a, b;
	cout << "Masukkan nilai a = ";
	cin >> a;
	cout << "Masukkan nilai b = ";
	cin >> b;
	hasil = kali (a, b);
	cout << "Hasil perkalian = " << hasil << endl;
	getchar();
}
