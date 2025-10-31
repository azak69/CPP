#include <iostream>
#include <cmath>
using namespace std;

double hitung_akar_kuadrat(double angka){
    return sqrt(angka);
}

void tampilkan_hasil(double angka){
    cout << "Akar kuadrat dari " << angka << " adalah " << hitung_akar_kuadrat(angka) << endl;
}

int main(){
    double angka;
    char ulang;

    do {
        system("cls");
        cout << "=== Program Perhitungan Akar Kuadrat ===" << endl;
        cout << "Masukkan angka: ";
        cin >> angka;
        system("cls");
        tampilkan_hasil(angka);

        cout << "Apakah Anda ingin menghitung lagi? (y/n): ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');

    cout << "================================" << endl;
    cout << "Terima kasih telah menggunakan program ini!" << endl;
    return 0;
}

// Program ini menghitung akar kuadrat dari sebuah angka yang dimasukkan oleh pengguna dan menampilkan hasilnya.