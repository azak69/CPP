#include <iostream>
#include <sstream>
using namespace std;

int main(){
    int decimal, modulo;
    string result, temp;
    cout << "Masukkan bilangan bulat untuk diubah ke biner: "; cin >> decimal;

    for (int i = decimal; i > 0; i /= 2){
        stringstream bit;
        modulo = i % 2;
        bit << modulo;
        bit >> temp;
        result += temp;
    }
    for(int j = result.length() - 1; j >= 0; j--){
        cout << result[j];
    }
}

// Program ini mendemonstrasikan penggunaan sstream dan for loop untuk mengonversi bilangan menjadi biner.