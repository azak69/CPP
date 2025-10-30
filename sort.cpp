#include <iostream>
using namespace std;

int main(){
    int leng;
    cout << "=== Pengurutan Data ===" << endl;
    cout << "Masukkan jumlah data : ";
    cin >> leng;
    int data[leng];
    cout << "Masukkan data : " << endl;
    for(int i = 0; i < leng; i++){
        cin >> data[i];
    }
    for(int j = 1; j < leng; j++){
        for(int k = 0; k < leng - j; k++){
            if(data[k] > data[k+1]){
                int temp = data[k];
                data[k] = data[k+1];
                data[k+1] = temp;
            }
        }
    }
    cout << "========================" << endl;
    cout << "=== Hasil Pengurutan ===" << endl;
    for(int l = 0; l < leng; l++){
        cout << data[l] << " ";
    }
}