#include <iostream>
using namespace std;

int main(){
    int a, b;
    int sum, difference, product, quotient, remainder;
    cout << "Masukkan bilangan bulat pertama : ";
    cin >> a;
    cout << "Masukkan bilangan bulat kedua   : ";
    cin >> b;
    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;
    remainder = a % b;
    cout << "Operasi Aritmatika pada " << a << " dan " << b << " :" << endl;
    cout << "Hasil penjumlahan      : " << sum << endl;
    cout << "Hasil pengurangan      : " << difference << endl;
    cout << "Hasil perkalian        : " << product << endl;
    cout << "Hasil pembagian        : " << quotient << endl;
    cout << "Hasil sisa pembagian   : " << remainder << endl;
    return 0;
}

// Program ini mendemonstrasikan penggunaan operator aritmatika dasar di C++.
