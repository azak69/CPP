#include <iostream>
using namespace std;

int main(){
    int l, p, L, u;
    do{
        cout << "Menghitung Luas Persegi Panjang menggunakan :" << endl;
        cout << "Masukkan panjang : ";
        cin >> p;
        cout << "Masukkan lebar   : ";
        cin >> l;
        L = p * l;
        cout << "Luas Persegi Panjang adalah : " << L << endl;
        cout << "Ingin menghitung lagi? (1=Ya / 0=Tidak) : ";
        cin >> u;
    } while(u == 1);
    cout << "Program selesai." << endl;
    return 0;
}

// Program ini mendemonstrasikan penggunaan perulangan do-while di C++.