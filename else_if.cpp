#include <iostream>
using namespace std;

int main(){
    int p;
    cout << "Masukkan gender anda\n1. Pria\n2. Wanita\nPilihan: ";
    cin >> p;

    if(p == 1){
        cout << "Jenis kelamin anda adalah Pria." << endl;
    } else if(p == 2){
        cout << "Jenis kelamin anda adalah Wanita." << endl;
    } else {
        cout << "Pilihan tidak valid. Silakan masukkan angka 1/2." << endl;
    return 0;
}

// Program ini mendemonstrasikan penggunaan struktur kendali else-if di C++.