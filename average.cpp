#include <iostream>
using namespace std;

int main(){
    float j, n, t, r;
    cout << "Program Rata-Rata Angka" << endl;
    cout << "Masukkan Jumlah Angka yang Ingin Dirata-Ratakan: ";
    cin >> j;
    for(int i = 1; i <= j; i++){
        cout << "Masukkan Angka ke-" << i << " : ";
        cin >> n;
        t += n;
    }
    cout << "=========================" << endl;
    cout << "Total Jumlah Angka : " << t << endl;
    r = t / j;
    cout << "Rata-Rata Angka    : " << r << endl;
}

// Program ini menghitung rata-rata dari sejumlah angka yang dimasukkan pengguna menggunakan perulangan for di C++.