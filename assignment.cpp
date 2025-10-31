#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> a;
    cout << "Anda memasukkan bilangan: " << a << endl;

    a += 5;
    cout << "Setelah ditambah 5, bilangan menjadi: " << a << endl;
    a *= 2;
    cout << "Setelah dikalikan 2, bilangan menjadi: " << a << endl;
    a -= 4;
    cout << "Setelah dikurangi 4, bilangan menjadi: " << a << endl;
    a /= 3;
    cout << "Setelah dibagi 3, bilangan menjadi: " << a << endl;
    a %= 4;
    cout << "Setelah diambil sisa bagi 4, bilangan menjadi: " << a << endl;
    return 0;
}

// Program ini mendemonstrasikan penggunaan operator penugasan dan operasi gabungan di C++.