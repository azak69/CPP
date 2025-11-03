#include <iostream>
using namespace std;

int main(){
    int f1, f2, n;
    int temp = 0;
    cout << "Menghitung Fibonacci dengan Loop" << endl;
    cout << "f1 : "; cin >> f1;
    cout << "f2 : "; cin >> f2;
    cout << "Jumlah fibonacci : "; cin >> n;
    cout << "================================" << endl;
    cout << f1 << ", " << f2 << ", ";
    for(int i = 3; i <= n; i++){
        temp = f1 + f2;
        cout << temp;
        if (i != n){
            cout << ", ";
        } 
        f1 = f2;
        f2 = temp;
    }
    return 0;
}

// Program ini menghitung fibonacci menggunakan for loop.