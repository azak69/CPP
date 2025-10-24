#include <iostream>
using namespace std;

int main(){
	int a, hasil;
	cout << "Masukkan Angka : ";
	cin >> a;
	
	hasil = a % 2;
	
	string kondisi = hasil == 1 ? "Ganjil" : "Genap";
	cout << "Angka " << a << " adalah bilangan " << kondisi << "." << endl;
	
	return 0;
}

// Program ini menentukan apakah sebuah angka yang dimasukkan oleh pengguna adalah bilangan ganjil atau genap.