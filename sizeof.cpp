#include <iostream>
using namespace std;

int main(){
	int angka[] = {1,2,3,4,5};
	int jumlah;
	jumlah = sizeof(angka)/sizeof(*angka);
	cout << jumlah << endl;
	
	for (int i=0; i<jumlah; i++){
		cout << angka[i] << endl;
	}
	
	return 0;
}

// Program ini menghitung jumlah elemen dalam array menggunakan operator sizeof dan menampilkan setiap elemen array.