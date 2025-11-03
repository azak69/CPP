#include <iostream>
using namespace std;

int faktorial(int n){
    if (n <= 1){
        return n;
    }else{
        return n * faktorial(n - 1);
    }
}

int main(){
    int a;
    cout << "Masukkan angka yang mau difaktorial : "; cin >> a;
    cout << "=======================================" << endl;
    cout << "Faktorial dari " << a << " adalah " << faktorial(a) << endl;
    return 0;
}

// Program ini menghitung faktorial dari suatu angka dengan menggunakan rekursif.