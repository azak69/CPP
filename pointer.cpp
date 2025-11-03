#include <iostream>
using namespace std;

int main(){
    int a = 9;
    int b;
    int *c = &a;
    int d = *c;

    cout << "Alamat a : " << &a << endl;
    cout << "Alamat b : " << &b << endl;
    cout << "c menunjukkan alamat a : " << c << endl;
    cout << "d menunjukkan nilai dari variabel yang ditunjuk c, yaitu a : " << d << endl;
    return 0;
}

// * reference untuk menyimpan alamat dari variabel di memori.
// & dereference untuk menampilkan alamat dari variabel di memori.
// Program ini mendemonstrasikan penggunaan pointer dalam c++.