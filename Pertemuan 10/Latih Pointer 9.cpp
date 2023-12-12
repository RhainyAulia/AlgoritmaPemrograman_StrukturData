#include <iostream>
using namespace std;

int TambahkanArray(const int* arr, int ukuran){
	int hasil = 0;
	for (int i = 0; i < ukuran; ++i){
		hasil += *arr;
		arr++;
	}
	return hasil;
}

int main (){
	int ukuran;
	cout << "Masukkan ukuran Array : ";
	cin >> ukuran;
	
	int arrayAngka[ukuran];
	cout << "Masukkan elemen array : " << endl;
	
	for (int i=0; i<ukuran; ++i){
		cout << "Elemen ke-" << i+1 << ": ";
		cin >> arrayAngka[i];
//		p = arrayAngka[i]+p;
	}
	
	int total = TambahkanArray(arrayAngka, ukuran);
	cout << "Hasil Penjumlahan Array = " << total <<  endl;
	
	return 0;
}
