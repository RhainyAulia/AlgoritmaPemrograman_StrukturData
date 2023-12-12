#include <iostream>
#include <iomanip>
using namespace std;

struct Mahasiswa {
	string nama ;
	string matkul;
	char npm[9];
	int sks;
};
Mahasiswa bayar[2];

int main (){
	int var=0, tetap=0;
	
	for (int i =0; i<2; i++){
		
		cout << "Nama Mahasiswa " << setw(3) << ": ";
		getline(cin, bayar[i].nama);
		cout << "NPM "<< setw(14) << ": ";
		cin >> bayar[i].npm;
		
		cin.ignore();
		
		cout << "Mata Kuliah " << setw(6) << ": "; 
		getline(cin, bayar[i].matkul);
		cout << "Jumlah SKS "<< setw(7) << ": ";
		cin >> bayar[i].sks;
		
		if(bayar[i].sks == 0){
			tetap = 250000;
			var = bayar[i].sks * 250000;
		}else if(bayar[i].sks>0){ //Menggunakan >0 dan bukan ==2
			tetap = 300000;
			var = bayar[i].sks * 300000;
		}
		
		cout << "SPP Tetap " << setw(8) << ": " << tetap << endl;
		cout << "SPP Variabel" << setw(6) << ": " << var << endl;
		cout << "Total SPP " << setw(8) << ": " << tetap+var << endl;
				
		cin.ignore();
	}
	cout << "=================================" << endl;

	
	return 0;
}
