#include <iostream>
using namespace std;

int main(){
    bool output;
    int a, b;
    cout << "Membandingkan 2 bilangan bulat : " << endl;
    cout << "Masukkan bilangan bulat pertama : ";
    cin >> a;
    cout << "Masukkan bilangan bulat kedua   : ";
    cin >> b;
    output = (a == b);
    cout << a << " sama dengan " << b << " : " << output << endl;
    output = (a != b);
    cout << a << " tidak sama dengan " << b << " : " << output << endl;
    output = (a > b);
    cout << a << " lebih besar dari " << b << " : " << output << endl;
    output = (a < b);
    cout << a << " lebih kecil dari " << b << " : " << output << endl;
    output = (a >= b);
    cout << a << " lebih besar atau sama dengan " << b << " : " << output << endl;
    output = (a <= b);
    cout << a << " lebih kecil atau sama dengan " << b << " : " << output << endl;
    output = (a > 0 && b > 0);
    cout << a << " dan " << b << " keduanya positif : " << output << endl;
    output = (a > 0 || b > 0);
    cout << "Salah satu dari " << a << " atau " << b << " positif : " << output << endl;
    return 0;
}

// Program ini mendemonstrasikan penggunaan operator logika dan perbandingan di C++.