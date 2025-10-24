#include <iostream>
using namespace std;

int main(){
	int jml_arr;
	cout << "Masukkan Jumlah Index : ";
	cin >> jml_arr;
	
	int angka[jml_arr];
	
	for(int i = 0; i < jml_arr; i++){
		cout << "Masukkan Angka di Index ke-" << i << " : ";
		cin >> angka[i];
	}
	
	cout << "===========================================" << endl;
	cout << "Nilai yang Tersimpan" << endl;
	cout << "===========================================" << endl;
	
	for(int j = 0; j < jml_arr; j++){
		cout << "Index ke-" << j << " : " << angka[j] << endl;
	}
	
	return 0;
}

int main(){
	int jml_data;
	cout << "Masukkan Jumlah Data : ";
	cin >> jml_data;
	
	float nilai[jml_data], total, rata2;
	for (int i = 0; i < jml_data; i++){
		cout << "Masukkan Data Ke-" << i << " : ";
		cin >> nilai[i];
		total += nilai[i];
	}
	cout << "=========================" << endl;
	cout << "Total Nilai Data     : " << total << endl;
	
	rata2 = total / jml_data;
	cout << "Rata-Rata Nilai Data : " << rata2;
}