#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> a;

    if (a % 2 == 0) {
        cout << a << " adalah bilangan genap." << endl;
    } else {
        cout << a << " adalah bilangan ganjil." << endl;
    }
    cout << "Program selesai." << endl;
    return 0;
}

// Program ini mendemonstrasikan penggunaan struktur kendali if-else di C++.