#include <iostream>
using namespace std;

int main(){
	
	int yofrie = 93, *hadiansyah;
	
	cout << "Nilai awal Yofrie = " << yofrie << endl;
	
	hadiansyah = &yofrie;
	
	cout << "Nilai Hadiansyah sekarang = ";
	cout << *hadiansyah << endl;
	
	*hadiansyah = 50;
	
	cout << "Nilai hasiansyah sekarang = ";
	cout << *hadiansyah << endl;
	
	getchar();
}
