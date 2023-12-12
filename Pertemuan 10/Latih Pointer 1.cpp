#include <iostream>
using namespace std;

//pointer

void penjumlahan (int &total){
	total=total+1;
}

int main (){
	int hitung = 20, result =0;
	
	penjumlahan(hitung);
	
	cout << "---Pass by Reference---\n"
		 << "total = "
		 << hitung;
	
	return 0;
}
