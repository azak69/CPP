#include <iostream>
#include <string>
using namespace std;

int main(){
    string nama_depan;
    string nama_belakang;

    cout << "Masukkan nama depan : "; getline(cin, nama_depan);
    cout << "Masukkan nama belakang : " ; getline(cin, nama_belakang);
    cout << "========================" << endl;

    string nama = nama_depan +  " " + nama_belakang;
    cout << "Namanya : " << nama << endl;
    nama_depan += " " + nama_belakang;
    cout << "Namanya : " << nama_depan << endl;
    cout << "========================" << endl;

    string kalimat = "Kafka sedang membaca";
    string sentence = "Kafka sedang menghitung";
    cout << kalimat << endl;
    cout << sentence << endl;
    cout << endl;

    kalimat.swap(sentence);
    cout << "Di swap : " << endl;
    cout << kalimat << endl;
    cout << sentence << endl;
    cout << endl;

    cout << "Mencari : " << endl;
    int cari_kata = kalimat.find("sedang");
    cout << "Kata sedang ada di : " << cari_kata << endl;
    cout << endl;

    cout << "Di replace : " << endl;
    kalimat.replace(6, 6, "lagi");
    cout << "Jadi : " << kalimat << endl;;
    cout << endl;

    cout << "Jumlah karakter : " << endl;
    int jumlah = kalimat.length();
    cout << "Jumlahnya : " << jumlah << endl;
    cout << endl;

    cout << "Jumlah kata : " << endl;
    int jumlah_kata = 1;
    for (int i = 0; i < jumlah; i++){
        if (kalimat[i] == ' '){
            jumlah_kata++;
        }
    }
    cout << "Jumlahnya : " << jumlah_kata << endl;
    cout << endl;

    cout << "Replace input : " << endl;
    string ubah_kata;
    cout << "Kata yang diubah : "; getline(cin, ubah_kata);
    int jumlah_k = ubah_kata.length();
    int cari_ubah = kalimat.find(ubah_kata);
    if (cari_ubah > -1){
        string pengubah;
        cout << "Ubah dengan kata : "; cin >> pengubah;
        kalimat.replace(cari_ubah, jumlah_k, pengubah);
    }else {
        cout << "Kata tidak ditemukan!";
    }
    cout << endl;
    cout << "Jadi kalimat : " << kalimat << endl;
return 0;
}

// Program ini mendemonstrasikan penggunaan manipulasi string dalam c++.