#include <iostream>
using namespace std;

int main(){
	int harga, jumlah_barang, total, pilihan;
	string barang;
	cout << "=== Program Kasir ===" << endl;
	cout << "Barang Tersedia : " << endl;
	cout << "1. Roti \t : Rp. 3000/pcs" << endl;
	cout << "2. Susu \t : Rp. 4000/pcs" << endl;
	cout << "3. Sosis \t : Rp. 1000/pcs" << endl;
	cout << "4. Selesai" << endl;
	do{
		cout << "Isi pilihan kode barang (1-4): ";
		cin >> pilihan;
		switch(pilihan){
			case 1:
				barang = "Roti";
				harga = 3000;
				cout << "Jumlah barang : ";
				cin >> jumlah_barang;
				total += harga * jumlah_barang;
				cout << jumlah_barang << " " << barang;
				cout << " : Rp. " << harga * jumlah_barang << endl;
				break;
			case 2:
				barang = "Susu";
				harga = 4000;
				cout << "Jumlah barang : ";
				cin >> jumlah_barang;
				total += harga * jumlah_barang;
				cout << jumlah_barang << " " << barang;
				cout << " : Rp. " << harga * jumlah_barang << endl;
				break;
			case 3:
				barang = "Sosis";
				harga = 1000;
				cout << "Jumlah barang : ";
				cin >> jumlah_barang;
				total += harga * jumlah_barang;
				cout << jumlah_barang << " " << barang;
				cout << " : Rp. " << harga * jumlah_barang << endl;
				break;
			case 4:
				cout << "Total Pembayaran : Rp. " << total << endl;
				break;
			default:
				cout << "Pilihan tidak valid." << endl;
				break;
			}
	}while(pilihan != 4);
	cout << "Terima kasih telah berbelanja!" << endl;
	return 0;
}

// Program ini mensimulasikan sistem kasir sederhana.