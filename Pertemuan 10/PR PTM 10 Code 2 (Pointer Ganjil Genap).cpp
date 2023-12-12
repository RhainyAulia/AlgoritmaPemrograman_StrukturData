#include <iostream>
using namespace std;

void Genap(int x) {
    cout << 200 << endl;
}

void Ganjil(int x) {
    cout << 201 << endl;
}

int main() {
    int x, sisaBagi;

    cout << "Masukkan sebuah bilangan: ";
    cin >> x;

    sisaBagi = x % 2;

    void (*cetak)(int);

    if (sisaBagi == 0) {
        cetak = &Genap;
    } else {
        cetak = &Ganjil;
    }

    cetak(x);

    return 0;
}

