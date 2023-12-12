#include<iostream>
using namespace std;

int main() {  
    int i, sum = 0;

    cout << "10 deret bilangan ganjil : " << endl;
    for (i = 1; i <= 10*2; i++) {
        if (i%2 != 0){
        	cout << i;
        	sum += i;

		}

    	else if (i <= 10*2){
    		cout << " + ";
		}

    }

    cout << " = " << sum << endl;

    return 0;
}

