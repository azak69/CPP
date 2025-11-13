#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int *a;
    a = (int*) malloc(10 *sizeof(int));

    if (a == NULL){
        cout << "Alokasi memori gagal!" << endl;
        return 1;
    }

    cout << "Masukkan 10 nilai : " << endl;
    for (int i = 0; i < 10; i++){
        cin >> a[i];
    }

    for (int j = 0; j < 10; j++){
        cout << a[j] << " ";
    }

    free(a);
    return 0;
}

// Program ini mendemonstrasikan penggunaan alokasi memori untuk membuat ruang memori sejumlah 10, lalu dimasukkan input oleh pengguna;