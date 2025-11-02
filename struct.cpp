#include <iostream>
using namespace std;

struct mhs{
    string nama, nim, kelas;
    int nilai;
};

char tingkat(int t){
    if (t > 90){
        return 'A';
    }else if (t > 75 && t <= 90){
        return 'B';
    }else if (t > 65 && t <= 75){
        return 'C';
    }else if (t > 55 && t <= 65){
        return 'D';
    }else{
        return 'E';
    }
}

string status(char s){
    if (s == 'A' || s == 'B' || s == 'C'){
        return "Lulus";
    }else{
        return "Gagal";
    }
}

int main() {
    int j;
    cout << "=== Program Data Nilai Mahasiswa ===\n";
    cout << "Masukkan Jumlah Mahasiswa : "; cin >> j;
    mhs mahasiswa[j];
    cout << "Masukkan Data Mahasiswa : " << endl;
    cout << endl;
    for (int i = 0; i < j; i++){
        cout << "Mahasiswa Ke- " << i + 1 << endl;
        cout << "NIM \t: "; cin >> mahasiswa[i].nim;
        cout << "Nama \t: "; cin >> mahasiswa[i].nama;
        cout << "Kelas \t: "; cin >> mahasiswa[i].kelas;
        cout << "Nilai \t: "; cin >> mahasiswa[i].nilai;
        cout << endl;
    }
    cout << "===============================" << endl;
    cout << "Hasil Data : " << endl;
    cout << endl;
    for (int k = 0; k < j; k++){
        cout << "Data Mahasiswa Ke-" << k + 1 << endl;
        cout << "NIM \t: " << mahasiswa[k].nim << endl;
        cout << "Nama \t: " << mahasiswa[k].nama << endl;
        cout << "Kelas \t: " << mahasiswa[k].kelas << endl;
        cout << "Nilai \t: " << mahasiswa[k].nilai << endl;
        cout << "Tingkat Nilai \t: " << tingkat(mahasiswa[k].nilai) << endl;
        cout << "Status \t: " << status(tingkat(mahasiswa[k].nilai)) << endl;
        cout << endl;
    }
}

// Program ini menggunakan struct untuk menyimpan dan menampilkan data nama, nim, kelas, dan  nilai pada setiap mahasiswa.