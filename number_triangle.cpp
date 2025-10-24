#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Masukkan Tinggi Segitiga : ";
	cin >> n;
	
	for (int i = 1; i <= n; i++){
		for (int j = n; j > i; j--){
			cout << "  ";
		}
		for (int k = 1; k <= i; k++){
			cout << k << " ";
		} cout << endl;
	}
	return 0;
}