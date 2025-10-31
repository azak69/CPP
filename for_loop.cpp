#include <iostream>
using namespace std;

int main(){
    int awal, akhir;
    cout << "Program Perulangan : " << endl;
    cout << "Masukkan angka awal: ";
    cin >> awal;
    cout << "Masukkan angka akhir: ";
    cin >> akhir;
    for(int i = awal; i <= akhir; i++){
        cout << "Perulangan ke-" << i << endl;
    }
    return 0;
}

// Program ini mendemonstrasikan penggunaan perulangan for di C++.