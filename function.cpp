#include <iostream>
using namespace std;

void hobi(string nama, string hobi_saya){
    cout << "Nama Saya Adalah " << nama << endl;
    cout << "Hobi Saya Adalah " << hobi_saya << endl;
}
int main(){
    string nama, hobi_saya;
    cout << "Masukkan Nama Anda : ";
    cin >> nama;
    cin.ignore();
    cout << "Masukkan Hobi Anda : ";
    cin >> hobi_saya;
    cin.ignore();
	cout << endl;
    hobi(nama, hobi_saya);
    
    return 0;
}
    