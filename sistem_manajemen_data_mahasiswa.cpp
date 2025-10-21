#include <iostream>
#include <string>
#include <limits>
using namespace std;

const int max_mahasiswa = 100;

struct mahasiswa {
	string nim;
	string nama;
	string jurusan;
	float ipk;
};

mahasiswa daftar_mahasiswa[max_mahasiswa];
int jumlah_mahasiswa = 0;

void tampilkan_menu();
void tambah_mahasiswa();
void tampilkan_semua_mahasiswa();
void cari_mahasiswa();
void hapus_mahasiswa();
void bersihkan_layar();

int main(){
	int pilihan;
	do {
		tampilkan_menu();
		cout << "Masukkan Pilihan Anda : ";
		cin >> pilihan;
		
		if (cin.fail()){
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			pilihan = 0;
		}
		
		switch (pilihan) {
			case 1:
				tambah_mahasiswa();
				break;
			case 2:
				tampilkan_semua_mahasiswa();
				break;
			case 3:
				cari_mahasiswa();
				break;
			case 4:
				hapus_mahasiswa();
				break;
			case 5:
				cout << "Terimakasih telah menggunakan program ini. Sampai jumpa!" << endl;
				break;
			default:
				cout << "Pilihan tidak valid. Silahkan coba lagi." << endl;
		}
		
		if (pilihan != 5) {
			cout << "\nTekan Enter untuk kembali ke menu...";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin.get();
		}
	} while (pilihan != 5);
	
	return 0;
}

void tampilkan_menu() {
	bersihkan_layar();
	cout << "========================================" << endl;
	cout << "   Sistem Manajemen Data Mahasiswa" << endl;
	cout << "========================================" << endl;
	cout << "1. Tambah Data Mahasiswa" << endl;
	cout << "2. Tampilkan Semua Data Mahasiswa" << endl;
	cout << "3. Cari Mahasiswa (Berdasarkan NIM)" << endl;
	cout << "4. Hapus Mahasiswa (Berdasarkan NIM)" << endl;
	cout << "5. Keluar" << endl;
	cout << "========================================" << endl;
}

void tambah_mahasiswa(){
	bersihkan_layar();
	if (jumlah_mahasiswa >= max_mahasiswa){
		cout << "Kapasitas data penuh. Tidak bisa menambah mahasiawa lagi." << endl;
		return;
	}
	
	cout << "--- Tambah Data Mahasiswa ---" << endl;
	mahasiswa mhs;
	cout << "Masukkan NIM : ";
	cin >> mhs.nim;
	cin.ignore();
	cout << "Masukkan Nama : ";
	getline(cin, mhs.nama);
	cout << "Masukkan Jurusan : ";
	getline(cin, mhs.jurusan);
	cout << "Masukkan IPK : ";
	cin >> mhs.ipk;
	
	daftar_mahasiswa[jumlah_mahasiswa] = mhs;
	jumlah_mahasiswa++;
	
	cout << "\nData mahasiswa berhasil ditambahkan" << endl;
}

void tampilkan_semua_mahasiswa(){
	bersihkan_layar();
	cout << "--- Daftar Semua Mahasiswa ---" << endl;
	if (jumlah_mahasiswa == 0){
		cout << "Belum ada data mahasiswa yang tersimpan." << endl;
		return;
	}
	
	for (int i=0; i < jumlah_mahasiswa; i++){
		cout << "----------------------------------------" << endl;
		cout << "Mahasiswa ke-" << i + 1 << endl;
		cout << "NIM		: " << daftar_mahasiswa[i].nim << endl;
		cout << "Nama		: " << daftar_mahasiswa[i].nama << endl;
		cout << "Jurusan		: " << daftar_mahasiswa[i].jurusan << endl;
		cout << "IPK		: " << daftar_mahasiswa[i].ipk << endl;
	}
	cout << "----------------------------------------" << endl;
}

void cari_mahasiswa(){
	bersihkan_layar();
	cout <<"--- Cari Data Mahasiswa ---" << endl;
	if (jumlah_mahasiswa == 0){
		cout << "Belum ada data mahasiswa untuk dicari." << endl;
		return;
	}
	string nim_cari;
	cout << "Masukkan NIM mahasiswa yang ingin dicari : ";
	cin >> nim_cari;
	
	bool ditemukan = false;
	for (int i=0; i < jumlah_mahasiswa; i++){
		if (daftar_mahasiswa[i].nim == nim_cari){
			cout << "\n--- Data Ditemukan ---" << endl;
			cout << "NIM		: " << daftar_mahasiswa[i].nim << endl;
			cout << "Nama 		: " << daftar_mahasiswa[i].nama << endl;
			cout << "Jurusan		: " << daftar_mahasiswa[i].jurusan << endl;
			cout << "IPK		: " << daftar_mahasiswa[i].ipk << endl;
			ditemukan = true;
			break;
		}
	}
	
	if (!ditemukan) {
		cout << "Mahasiswa dengan NIM '" << nim_cari << "' tidak ditemukan." << endl;
	}
}

void hapus_mahasiswa(){
	bersihkan_layar();
	cout << "--- Hapus Data Mahasiswa ---" << endl;
	if (jumlah_mahasiswa == 0){
		cout << "Belum ada data mahasiswa untuk dihapus." << endl;
		return;
	}
	
	string nim_hapus;
	cout << "Masukkan NIM mahasiswa yang akan dihapus : ";
	cin >> nim_hapus;
	
	int index_hapus = -1;
	for (int i=0; i < jumlah_mahasiswa; i++){
		if (daftar_mahasiswa[i].nim == nim_hapus){
			index_hapus = i;
			break;
		}
	}
	
	if (index_hapus != -1){
		for (int i = index_hapus; i < jumlah_mahasiswa - 1; i++){
			daftar_mahasiswa[i] = daftar_mahasiswa[i+1];
		}
		jumlah_mahasiswa--;
		cout << "Data mahasiswa dengan NIM '" << nim_hapus << "' berhasil dihapus." << endl;
	} else {
		cout << "Mahasiswa dengan NIM '" << nim_hapus << "' tidak ditemukan." << endl;
	}
}

void bersihkan_layar(){
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif
}