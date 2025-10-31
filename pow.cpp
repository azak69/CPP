#include <iostream>
#include <cmath>
using namespace std;

double hitung_pangkat(double angka, double pangkat){
    return pow(angka, pangkat);
}

void tampilkan_hasil(double angka, double pangkat){
    cout << "Hasil dari " << angka << " pangkat " << pangkat;
    cout << " adalah " << hitung_pangkat(angka, pangkat) << endl;
}

int main(){
    double angka, pangkat;
    char ulang;

    do {
        system("cls");
        cout << "=== Program Perhitungan Pangkat ===" << endl;
        cout << "Masukkan angka: ";
        cin >> angka;
        cout << "Masukkan pangkat: ";
        cin >> pangkat;
        system("cls");
        tampilkan_hasil(angka, pangkat);

        cout << "Apakah Anda ingin menghitung lagi? (y/n): ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');

    cout << "================================" << endl;
    cout << "Terima kasih telah menggunakan program ini!" << endl;
    return 0;
}

// Program ini menghitung pangkat dari sebuah angka yang dimasukkan oleh pengguna dan menampilkan hasilnya.