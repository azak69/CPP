#include <iostream>
#include <bitset>
using namespace std;

int main(){
    int n;
    cout << "Masukkan bilangan yang akan diubah menjadi biner : "; cin >> n;
    cout << endl;
    cout << "Bentuk binernya " << n << " adalah " << bitset<8>(n) << endl;
return 0;
}

// Program ini mendemonstrasikan pebggunaan bitset untuk menampilkan bentuk biner dari suatu bilangan secara lebih mudah.