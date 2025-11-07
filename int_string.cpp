#include <iostream>
#include <sstream>
using namespace std;

int main(){
    int a;
    string k;
    cout << "Masukkan Angka : "; cin >> a;
    
    stringstream t;
    t << a;
    t >> k;

    cout << "Ini int : " << a + a << endl;
    cout << "Ini string : " << k + k << endl;
    cout << "=====================" << endl;

    int b;
    string l = "7";
    stringstream p;
    p << l;
    p >> b;

    cout << "Ini int : " << b + b << endl;
    cout << "Ini string : " << l + l << endl;
}

// Program ini mendemonstrasikan penggunaan sstream untuk mengonversi integer ke string dan sebaliknya.