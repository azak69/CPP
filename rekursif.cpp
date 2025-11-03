#include <iostream>
using namespace std;

void rekursif(int n){
    if (n > 0){
        cout << "Reskursif" << endl;
        n--;
        rekursif(n);
    }
}

int main(){
    rekursif(10);
}

// Program ini menggunakan rekursif untuk memanggil kembali fungsi pada dirinya sendiri.