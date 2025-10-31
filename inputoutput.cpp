#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, kerjaan;
    int age;

    cout << "Masukkan nama Anda \t: ";
    getline(cin, name);

    cout << "Masukkan usia Anda: \t";
    cin >> age;

    cout << "Masukkan pekerjaan Anda: \t";
    getline(cin, kerjaan);

    cout << "Halo, " << name << "! Anda berusia " << age << " tahun." << endl; 
    cout << "Pekerjaan Anda adalah " << kerjaan << "." << endl;

    return 0;
}

// Program ini mendemonstrasikan penggunaan input dan output dasar di C++.