#include <iostream>
using namespace std;

int main(){
	int jml_data, max, min, nilai;
	cout << "Banyak Data : ";
	cin >> jml_data;
	
	for(int i = 0; i < jml_data; i++){
		cout << "Masukkan Data ke-" << i << " : ";
		cin >> nilai;
		
		if (i == 0){
			min = nilai;
			max = nilai;
		}else {
			if(nilai > max){
			max = nilai;
			}
			else if(nilai < min){
			min = nilai;
			 }
		}
		
	}
	cout << "Nilai Maksimal : " << max << endl;
	cout << "Nilai Minimal : " << min;
}