#include <iostream>
#include <bitset>
using namespace std;

void bit(int b){
    cout << bitset<8>(b) << endl;
}

int main(){
    int a;
    int b;
    cout << "Program Operator Bitwise (Operasi Biner)" << endl;
    cout << "Masukkan bilangan pertama (a) : "; cin >> a;
    cout << "Masukkan bilangan kedua (b) : "; cin >> b;
    cout << endl;

    cout << "Bitwise not (~)" << endl;
    cout << "Desimal a \t: " << a << endl;
    cout << "Biner a \t: "; bit(a);
    cout << "Not a \t\t: "; bit(~a);
    cout << endl;

    cout << "Bitwise and (&)" << endl;
    cout << "Desimal a \t: " << a << endl;
    cout << "Desimal b \t: " << b << endl;
    cout << "Biner a \t: "; bit(a);
    cout << "Biner b \t: "; bit(b);
    cout << "And a & b \t: "; bit(a & b);
    cout << endl;

    cout << "Bitwise or (|)" << endl;
    cout << "Desimal a \t: " << a << endl;
    cout << "Desimal b \t: " << b << endl;
    cout << "Biner a \t: "; bit(a);
    cout << "Biner b \t: "; bit(b);
    cout << "Or a | b \t: "; bit(a | b);
    cout << endl;

    cout << "Bitwise xor (^)" << endl;
    cout << "Desimal a \t: " << a << endl;
    cout << "Desimal b \t: " << b << endl;
    cout << "Biner a \t: "; bit(a);
    cout << "Biner b \t: "; bit(b);
    cout << "Xor a ^ b \t: "; bit(a ^ b);
    cout << endl;

    cout << "Bitwise shift left (<<)" << endl;
    cout << "Desimal a \t: " << a << endl;
    cout << "Biner a \t: "; bit(a);
    cout << "Shift left a satu kali : "; bit(a << 1);
    cout << endl;

    cout << "Bitwise shift right (>>)" << endl;
    cout << "Desimal a \t: " << a << endl;
    cout << "Biner a \t: "; bit(a);
    cout << "Shift right a satu kali : "; bit(a >> 1);
    cout << endl;

    return 0;
}

// Program ini mendemonstrasikan penggunaan Bitset dan Bitwise untuk mengoperasikan bilangan biner.