#include <iostream>
using namespace std;

void angka(int *y){
    cout << "Alamat parameter : " << y << endl;
    cout << "Nilai parameter : " << *y << endl;
}

void kuadrat(int *z){
    *z = *z * *z;
}

int main(){
    int a = 9;
    int b;
    int *c = &a;
    int d = *c;

    cout << "Alamat a : " << &a << endl;
    cout << "Alamat b : " << &b << endl;
    cout << "c menunjukkan alamat a : " << c << endl;
    cout << "d menunjukkan nilai dari variabel yang ditunjuk c, yaitu a : " << d << endl;
    
    int x = 5;
    angka(&x);
    kuadrat(&x);
    cout << "Hasil kuadrat : " << x << endl;
    return 0;
}

// * reference untuk menyimpan alamat dari variabel di memori.
// & dereference untuk menampilkan alamat dari variabel di memori.
// Program ini mendemonstrasikan penggunaan pointer dalam c++.