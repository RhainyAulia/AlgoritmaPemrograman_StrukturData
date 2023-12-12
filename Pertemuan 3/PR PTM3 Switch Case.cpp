#include <iostream>
using namespace std;
int main (){
	int nPertandingan1, nPertandingan2, nPertandingan3, value;
	string nama_siswa;
	
	cout << "Program Hitung Nilai Rata-Rata" <<endl;
	cout << "===============================" <<endl;

	cout << "Masukkan Nama Siswa \t: ";
	getline(cin,nama_siswa);
	
	cout << "Nilai Pertandingan I \t: ";
	cin>> nPertandingan1;
	
	cout << "Nilai Pertandingan II \t: ";
	cin>> nPertandingan2;
	
	cout << "Nilai Pertandingan III \t: ";
	cin>> nPertandingan3;
	
	value = (nPertandingan1 + nPertandingan2 + nPertandingan3)/3;
	
	cout << "Siswa yang bernama " << nama_siswa << endl;
	cout << "Memperoleh nilai dengan rata-rata " << value << endl;
	cout << "Hadiah yang di dapat adalah ";
	
		switch (value){
			case 85 ... 100 :
			cout<<" Komputer Core i5!!!";
		break;
			case  70 ... 84 :
			cout<<" Uang sebesar Rp.2.500,000!!!";
		break;
		default:
			cout<<" Hadiah Hiburan!!!";
		break;
		}
	return 0;
}
