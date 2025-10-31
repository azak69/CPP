#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    string ulang;
    do{
        system("cls");
        cout << "=== Program Randomisasi Angka ===" << endl;
        int lower, upper;
        cout << "Masukkan batas bawah (lower): ";
        cin >> lower;
        cout << "Masukkan batas atas (upper): ";
        cin >> upper;
        if(lower >= upper){
            cout << "Batas bawah harus lebih kecil dari batas atas!" << endl;
        } else {
            int random_number = rand() % (upper - lower + 1) + lower;
            cout << "Angka random antara " << lower << " dan " << upper << " adalah: " << random_number << endl;
        }
        cout << "Apakah Anda ingin mengulangi program? (y/n): ";
        cin >> ulang;
    }while(ulang == "y" || ulang == "Y");
    cout << "================================" << endl;
    cout << "Terima kasih telah menggunakan program ini!" << endl;
    return 0;
}