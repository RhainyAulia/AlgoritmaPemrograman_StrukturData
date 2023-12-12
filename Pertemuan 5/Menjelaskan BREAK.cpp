#include <iostream>
using namespace std;

main (){
	int x, bil=0;
	
	cout << "Masukkan bilangan pembatas akhir : ";
	cin >> x;
	
	do{
		if (bil >= x) 		//syarat
		break; 				//"rem" setelah syarat terpenuhi 
		cout << bil << " ";
	}
	
	while (bil += 4); 
	getchar();
}
//kegunaan break adalah menghentikan loop do while apabila kondisi
// 				( bil >= x) telah terpenuhi.

// semisal x = 5, maka output hanya lah 0 dan 4
// 0 sebagai nilai pertama variabel bil
// dan 4 sebagai hasil dari while bil(0) += 4 = 4

// jika x adalah 9, maka output adalah 0, 4 dan 8.
// 8 berasal dari penjumlahan kedua dimana bil(4) += 4 = 8

//jika tidak menggunakan BREAK, program akan terus berjalan karena tidak ada
// "rem" setelah syarat terpenuhi
