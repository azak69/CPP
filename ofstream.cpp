#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ofstream file;
    string a;

    cout << "Masukkan kalimat ke file teks.txt: "; getline(cin, a);

    file.open("teks.txt");
    file << "Masukkan Anda : \n" << a << " ";

    system("START /MIN NOTEPAD teks.txt");   
}

// Program diatas menggunakan ofstream untuk menuliskan kalimat ke sebuah file yang dibuat.
