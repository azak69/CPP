#include <iostream>
#include <cstdlib>
using namespace std;

int main (){
    int *a = (int*) malloc(5 *sizeof(int));

     if (a == NULL){
        cout << "Alokasi memori gagal!" << endl;
        return 1;
    }

    for (int i = 0; i < 5; i++){
        a[i] = i + 1;
    }

    cout << "Sebelumnya : ";
    for (int j = 0; j < 5; j++){
        cout << a[j] << " ";
    }

    a = (int*) realloc(a, 10 * sizeof(int));

    for (int i = 0; i < 10; i++){
        a[i] = i + 1;
    }

    cout << "\nSetelah realloc : ";
    for (int j = 0; j < 10; j++){
        cout << a[j] << " ";
    }

    free(a);
    return 0;
}

// Program ini mendemonstrasikan penggunaan realloc dalam library cstdlib untuk mengubah jumlah ruang memori yang sudah dialokasikan dengan malloc.