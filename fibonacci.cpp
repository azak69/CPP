#include <iostream>
using namespace std;

int fibonacci(int n){
    if (n == 0 || n == 1){
        return n;
    }else {
        return(fibonacci(n - 1) + fibonacci(n - 2));
    }
}

int main(){
    int n, j = 0;
    cout << "=== Program Deret Fibonacci ===\n";
    cout << "Jumlah Deret : "; cin >> n;
    cout << "Deret Fibonacci : \n";
    for (int i = 1; i <= n; i++){
        cout << "f" << i << " : " << fibonacci(j) << endl;
        j++;
    }
    return 0;
}

// Program ini menampilkan deret fibonacci menggunakan fungsi rekursif sesuai input jumlah pengguna.