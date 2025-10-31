#include <iostream>
using namespace std;

double luas_segitiga(double alas, double tinggi){
    int luas = (alas * tinggi) / 2;
    return luas;
}

double keliling_segitiga(double sisi1, double sisi2, double sisi3){
    int keliling = sisi1 + sisi2 + sisi3;
    return keliling;
}

void tampil_luas(int alas, int tinggi){
    double luas = luas_segitiga(alas, tinggi);
    cout << "Luas Segitiga dengan alas " << alas << " dan tinggi " << tinggi << " adalah: " << luas << endl;
}

void tampil_keliling(int sisi1, int sisi2, int sisi3){
    int keliling = keliling_segitiga(sisi1, sisi2, sisi3);
    cout << "Keliling Segitiga dengan sisi " << sisi1 << ", " << sisi2 << ", dan " << sisi3 << " adalah: " << keliling << endl;
}

int main(){
    int a, t, s1, s2, s3;
    string pilihan, lanjut;
    do{
        system("cls");
        cout << "=== Program Menghitung Luas dan Keliling Segitiga ===" << endl;
        cout << "Masukkan program yang ingin dijalankan (luas/l/keliling/k): ";
        cin >> pilihan;
        if (pilihan == "keliling" || pilihan == "k") {
            cout << "Masukkan panjang sisi pertama segitiga: ";
            cin >> s1;
            cout << "Masukkan panjang sisi kedua segitiga: ";
            cin >> s2;
            cout << "Masukkan panjang sisi ketiga segitiga: ";
            cin >> s3;
            tampil_keliling(s1, s2, s3);
            cout << "======================================" << endl;
            cout << "Apakah Anda ingin menghitung lagi? (y/t): ";
            cin >> lanjut;
        }else if(pilihan == "luas" || pilihan == "l"){
            cout << "Masukkan panjang alas segitiga: ";
            cin >> a;
            cout << "Masukkan tinggi segitiga: ";
            cin >> t;
            tampil_luas(a, t);
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