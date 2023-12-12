#include <iostream>
#include <string.h>
using namespace std;

main (){
	
	int data[3][3], i,j,a,b;
	string Nama[3];
	
	cout << "Masukkan Data" << endl;
	for (i=0; i<3; i++){
		cout << "Barang " << i+1 <<endl;
		cout << "Nama Barang : "; cin >> Nama[i];
		for (j=0; j<3; j++)	{
			cout << "200" <<j+1 <<" : "; cin >> data[i][j];	
		}
		cout << endl;
	}
		
	cout << "\nHASIL PENJUALAN BARANG" << endl;
	cout << "================================================"<< endl;
	cout << "No \tNama Barang \t2001 \t2002 \t2003"<< endl;
	for (i=0; i<3; i++){
		cout << i+1 << "\t" << Nama[i] <<"\t\t";
		for (j=0; j<3; j++){
			cout<<data[i][j]<<"\t";
		}
		cout << endl;
	}
	return 0;
	}
