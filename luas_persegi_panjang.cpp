#include <iostream>
using namespace std;

int main() {
    int panjang, lebar;
    cout << "Masukkan panjang: ";  
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
    int luas = panjang * lebar;
    cout << "Luas persegi panjang adalah: " << luas << endl;
    return 0;
}

// Program ini menghitung luas persegi panjang berdasarkan input panjang dan lebar dari pengguna.