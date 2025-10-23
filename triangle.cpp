#include <iostream>
using namespace std;

int main() {
    // Tentukan tinggi segitiga
    int tinggi;
    cout << "Masukkan Tinggi Segitiga : ";
    cin >> tinggi;

    // Loop luar untuk mengatur setiap baris (dari atas ke bawah)
    for (int i = 0; i < tinggi; ++i) {
        
        // Loop untuk mencetak spasi di sebelah kiri
        // Jumlah spasi akan berkurang seiring bertambahnya baris
        for (int j = 0; j < tinggi - i - 1; ++j) {
            cout << " ";
        }

        // Loop untuk mencetak bintang
        // Jumlah bintang adalah 2*i + 1 (misal: 1, 3, 5, dst.)
        for (int k = 0; k < 2 * i + 1; ++k) {
            cout << "*";
        }

        // Pindah ke baris baru setelah satu baris selesai
        cout << endl;
    }

    return 0;
}