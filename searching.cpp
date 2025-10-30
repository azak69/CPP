#include <iostream>
using namespace std;

int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n;
	bool ketemu = false;
	
	cout << "Masukkan angka yang dicari (1-10) : ";
	cin >> n;
	
	for (int i = 0; i <= 9; i++){
		if (arr[i] == n){
			cout << "Angka " << n << " ditemukan.";
			ketemu = true;
			break;
		}
	}
	if (!ketemu){
		cout << "Angka " << n << " Tidak ditemukan.";
	}
	return 0;	
}