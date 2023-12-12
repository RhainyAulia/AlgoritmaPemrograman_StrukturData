#include<iostream>
using namespace std;

int main() {  
    int i, sum = 0, input;
    
    cout << "Masukkan jumlah deret = ";
	cin >> input;
	
    cout << input << " deret bilangan ganjil : " << endl;
    for (i = 1; i <= input*2; i++) {
        if (i%2 != 0){
        	cout << i;
        	sum += i;

		}

    	else if (i == input*2){
    		cout << ""; // simbol pertambahan paling akhir
		} 
		
		else {
			cout << " + ";
		}

    }

    cout << " = " << sum << endl;

    return 0;
}

