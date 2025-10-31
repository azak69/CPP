#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    string nama, asal, kerja, lanjut;
    do{
	    system("cls");
	    cout << "Masukkan Nama Anda: ";
	    cin >> nama;
	    cout << "Masukkan Tempat Asal Anda: ";
	    cin >> asal;
	    cout << "Masukkan Pekerjaan Anda: ";
	    cin >> kerja;
        system("cls");
	    cout << "Halo, " << nama << " dari " << asal << " yang bekerja sebagai " << kerja << "!" << endl;
	    cout << "Mau mengulagi program <y/n>";
	    cin >> lanjut;
	}while(lanjut == "y" || lanjut == "Y");
    cout << "Terima kasih telah menggunakan program ini!" << endl;
    return 0;
}