#include <iostream>
#include <iomanip>
using namespace std;

int pangkat(int x, int y);

int main(){
	
	int x, y;
	
	cout << "MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF" << endl
		 << setw(25) << "X pangkat Y" << endl << endl
		 << "Masukkan Nilai X = ";
	cin >> x;
	cout << "Masukkan Nilai Y = ";
	cin >> y;	
	cout << endl << "Hasil " << x << " Pangkat " << y <<  " Adalah " << pangkat(x,y);
	
	return 0;
}

int pangkat(int x, int y) {
	if (y==0){
		return 1;
	}else{
		return x * pangkat(x, y-1);
	}
}

