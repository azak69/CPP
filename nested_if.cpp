#include <iostream>
using namespace std;

int main(){
    int p, u;
    cout << "Masukkan gender anda\n1. Pria\n2. Wanita\nPilihan: ";
    cin >> p;
    cout << "Masukkan usia anda (tahun): ";
    cin >> u;

    if(p == 1){
        if(u < 18){
            cout << "Anda adalah Pria di bawah umur." << endl;
        } else {
            cout << "Anda adalah Pria dewasa." << endl;
        }
    } else if(p == 2){
        if(u < 18){
            cout << "Anda adalah Wanita di bawah umur." << endl;
        } else {
            cout << "Anda adalah Wanita dewasa." << endl;
        }
    } else {
        cout << "Pilihan tidak valid. Silakan masukkan angka 1/2." << endl;
    }
    return 0;
}

// Program ini mendemonstrasikan penggunaan struktur kendali if-else bersarang di C++.