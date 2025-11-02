#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
using namespace std;

int main(){
    int p, u, e;
    string l, d, s;
    system("cls");
    cout << "=== Game Lempar Dadu ===" << endl;
    cout << "1. Lempar Dadu\n2. Keluar\nPilihan Anda : ";
    cin >> p;       
    do{
        if (p == 1){
            system("cls");
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Lempar Dadu Anda <Enter>? ";
            getline(cin, d);
            u = (rand() % 6) + 1;
            cout << "Anda memperoleh angka : " << u << endl;
            cout << "Lempar Dadu Lawan <Enter>? ";
            getline(cin, s);
            e = (rand() % 6) + 1;
            cout << "Lawan memperoleh angka : " << e << endl;
            if (u > e){
                cout << "Anda Menang! Lawan Kalah!" << endl;
            }else if (u < e){
                cout << "Anda Kalah! Lawan Menang!" << endl;
            }else{
                cout << "Anda dan Lawan Seri!" << endl;
            }
        }else if (p == 2){
            cout << "\nAnda Keluar!";
            break;
        }else{
            cout << "Pilihan tidak valid! Silakan maukkan kode 1 atau 2." << endl;
        }
        cout << "========================" << endl;
        cout << "Mau mengulang lagi <y/n>? ";
        cin >> l;          
    }while(l == "y" || l == "Y" || l == "ya" || l == "Ya");
    if (l != "y" || l != "Y" || l != "ya" || l != "Ya"){
        cout << "\nTerimakasih telah memainkan Game ini!" << endl;
    }
return 0;  
}

// Program ini memainkan game lempar dadu random untuk pengguna dan lawannya, serta menentukan pemenangnya.