#include <iostream>
using namespace std;

double luas_persegi(double sisi){
    double luas = sisi * sisi;
    return luas;
}

double keliling_persegi(double sisi){
    double keliling = 4 * sisi;
    return keliling;
}

void tampil_luas(double sisi){
    double luas = luas_persegi(sisi);
    cout << "Luas Persegi dengan sisi " << sisi << " adalah: " << luas << endl;
}

void tampil_keliling(double sisi){
    double keliling = keliling_persegi(sisi);
    cout << "Keliling Persegi dengan sisi " << sisi << " adalah: " << keliling << endl;
}

int main(){
    double s;
    string pilihan, lanjut;
    do{
        system("cls");
        cout << "=== Program Menghitung Luas dan Keliling Persegi ===" << endl;
        cout << "Masukkan program yang ingin dijalankan (luas/l/keliling/k): ";
        cin >> pilihan;
        if (pilihan == "keliling" || pilihan == "k") {
            cout << "Masukkan panjang sisi persegi: ";
            cin >> s;
            tampil_keliling(s);
            cout << "======================================" << endl;
            cout << "Apakah Anda ingin menghitung lagi? (y/t): ";
            cin >> lanjut;
        }else if(pilihan == "luas" || pilihan == "l"){
            cout << "Masukkan panjang sisi persegi: ";
            cin >> s;
            tampil_luas(s);
            cout << "======================================" << endl;
            cout << "Apakah Anda ingin menghitung lagi? (y/t): ";
            cin >> lanjut;
        }else{
            cout << "Pilihan tidak valid. Silakan masukkan kata 'luas' atau 'keliling'." << endl;
            cout << "Apakah Anda ingin mencoba lagi? (y/t): ";
            cin >> lanjut;
        }
    }while(lanjut == "y" || lanjut == "Y" || lanjut == "ya" || lanjut == "Ya" || lanjut == "YA");
    cout << "Terima kasih telah menggunakan program ini!" << endl;
    return 0;
}

// Program ini menghitung luas dan keliling persegi berdasarkan input sisi dari pengguna.