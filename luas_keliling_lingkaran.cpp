#include <iostream>
using namespace std;

double luas_lingkaran(double radius){
    const double phi = 3.14159;
    double luas = phi * radius * radius;
    return luas;
}

double keliling_lingkaran(double radius){
    const double phi = 3.14159;
    double keliling = 2 * phi * radius;
    return keliling;
}

void tampil_luas(double radius){
    double luas = luas_lingkaran(radius);
    cout << "Luas Lingkaran dengan radius " << radius << " adalah: " << luas << endl;
}

void tampil_keliling(double radius){
    double keliling = keliling_lingkaran(radius);
    cout << "Keliling Lingkaran dengan radius " << radius << " adalah: " << keliling << endl;
}

int main(){
    double r;
    string pilihan, lanjut;
    do{
        system("cls");
        cout << "=== Program Menghitung Luas dan Keliling Lingkaran ===" << endl;
        cout << "Masukkan program yang ingin dijalankan (luas/l/keliling/k): ";
        cin >> pilihan;
        if (pilihan == "keliling" || pilihan == "k") {
            cout << "Masukkan panjang radius lingkaran: ";
            cin >> r;
            tampil_keliling(r);
            cout << "======================================" << endl;
            cout << "Apakah Anda ingin menghitung lagi? (y/t): ";
            cin >> lanjut;
        }else if(pilihan == "luas" || pilihan == "l"){
            cout << "Masukkan panjang radius lingkaran: ";
            cin >> r;
            tampil_luas(r);
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

// Program ini menghitung luas dan keliling lingkaran berdasarkan input radius dari pengguna.