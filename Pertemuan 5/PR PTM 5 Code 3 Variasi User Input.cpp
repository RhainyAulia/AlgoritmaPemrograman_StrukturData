#include<iostream>
using namespace std;

int main() {  
    int i, sum = 0, input;

	cout << "Masukkan jumlah deret = ";
	cin >> input;
	
    cout << input << " deret bilangan genap : " << endl;
    for (i = 2; i <= input*2; i++) {
        if (i%2 == 0){
        	cout << i << "";
        	sum += i;

		}

    	else if (i <= input*2){
    		cout << " + ";
		} 

    }

    cout << " = " << sum << endl;

    return 0;
}
