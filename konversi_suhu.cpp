#include <iostream>
using namespace std;

double c, r, k, f;

double celsius_to_reamur(double c){
    r = c * 4.0 / 5.0;
    return r;
}

double celsius_to_fahrenheit(double c){
    f = (c * 9.0 / 5.0) + 32.0;
    return f;
}

double celsius_to_kelvin(double c){
    k = c + 273.15;
    return k;
}

void tampil_konversi(double c){
    double r = celsius_to_reamur(c);
    double f = celsius_to_fahrenheit(c);
    double k = celsius_to_kelvin(c);
    cout << "Suhu dalam Reamur: " << r << " derajat R" << endl;
    cout << "Suhu dalam Fahrenheit: " << f << " derajat F" << endl;
    cout << "Suhu dalam Kelvin: " << k << " K" << endl;
}

int main(){
    string lanjut;
    do{
        system("cls");
        cout << "=== Program Konversi Suhu ===" << endl;
        cout << "Masukkan suhu dalam Celsius: "; cin >> c;
        tampil_konversi(c);
        cout << "======================================" << endl;
        cout << "Apakah Anda ingin mengkonversi lagi? (y/t): ";
        cin >> lanjut;
    }while(lanjut == "y" || lanjut == "Y" || lanjut == "ya" || lanjut == "Ya" || lanjut == "YA");
    cout << "Terima kasih telah menggunakan program ini!" << endl;
    return 0;
}

// Program ini mengkonversi suhu dari Celsius ke Reamur, Fahrenheit, dan Kelvin berdasarkan input pengguna.