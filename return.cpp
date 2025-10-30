#include <iostream>
using namespace std;

int luas_segitiga(int tinggi, int alas) {
    int luas = tinggi * alas / 2;
    return luas;
}

int main() {
    int tinggi, alas;
    cout << "Masukkan tinggi segitiga : ";
    cin >> tinggi;
    cout << "Masukkan alas segitiga   : "; 
    cin >> alas;
    cout << endl;
    cout << "Luas segitiga adalah : " << luas_segitiga(tinggi, alas) << endl;
    return 0;
}