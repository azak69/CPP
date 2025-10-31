#include <iostream>
using namespace std;

int main(){
    int p;
    cout << "Masukkan jenis kelamin anda\n1. Pria\n2. Wanita\n3. Lainnya\nPilihan: ";
    cin >> p;

    switch(p){
        case 1:
            cout << "Jenis kelamin anda adalah Pria." << endl;
            break;
        case 2:
            cout << "Jenis kelamin anda adalah Wanita." << endl;
            break;
        case 3:
            cout << "Jenis kelamin anda adalah Lainnya." << endl;
            break;
        default:
            cout << "Pilihan tidak valid. Silakan masukkan angka 1, 2, atau 3." << endl;
    }
    return 0;
}

// Program ini mendemonstrasikan penggunaan struktur kendali switch-case di C++.