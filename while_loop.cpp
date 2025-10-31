#include <iostream>
using namespace std;

int main(){
    int a, n, k;
    cout << "Program Perulangan : " << endl;
    cout << "Masukkan angka awal: ";
    cin >> a;
    cout << "Masukkan angka akhir: ";
    cin >> n;
    cout << "Masukkan kelipatan: ";
    cin >> k;
    while(a <= n){
        cout << "Perulangan ke-" << a << endl;
        a+=k;
    }
}

// Program ini mendemonstrasikan penggunaan perulangan while di C++.