#include <iostream>
using namespace std;

int main (){
	int i,
		nilai [5],
		*ptrnilai;
	ptrnilai = nilai;
	
	for (i=1; i<=5; i++){
		cout << "Masukkan Nilai Elemen Ke-" << i << "=";
		cin >> nilai [i];
	}
	
	cout << endl;
	cout << "Hasil Pengaksesan Elemen Array Lewat Pointer"
		 << endl << endl;
		 
	for (i=1; i<=5; i++){
		cout << "Elemen " << i << ". Nilai" << nilai[i]
			 << "Menempati Alamat Memori = "
			 << &ptrnilai[i]
			 << endl;
	}
	getchar ();
}
