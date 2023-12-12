#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int i, z=2;
    string x;

    cout << "   Mesin Gachapon" << endl << "=====================" << endl;

    stack<string> isi;

    isi.push("Bola Merah");
    isi.push("Bola Coklat");
    isi.push("Bola Ungu");
    isi.push("Bola Hitam");

	for (i = 1; i < z; i++){
	
    cout << "\nGacha! (y/n) ";
    cin >> x;

    if (x == "N" || x == "n") {
        cout << "\nGachapon Berhenti." << endl;

    } else if (x == "Y" || x == "y") {
    	
        if (!isi.empty()) {
            string hasilGacha = isi.top();
            isi.pop(); 
            cout << endl << "Hasil Gacha: " << hasilGacha << endl;
            z++;
        } else {
            cout << "\nGachapon Kosong :(" << endl;
        }
        
    } else {
        cout << "Input tidak valid. Silakan masukkan 'y' atau 'n'." << endl;
    }
	}
    return 0;
}

