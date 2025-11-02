#include <iostream>
#include <cstdlib>
using namespace std;

string m(string p, string e){
    if (p == "Batu"){
        if (e == "Batu"){
            return "Seri";
        }else if(e == "Gunting"){
            return "Menang";
        }else if (e == "Kertas"){
            return "Kalah";
        }
    }else if (p == "Gunting"){
        if (e == "Batu"){
            return "Kalah";
        }else if(e == "Gunting"){
            return "Seri";
        }else if (e == "Kertas"){
            return "Menang";
        }
    }else if (p == "Kertas"){
        if (e == "Batu"){
            return "Menang";
        }else if(e == "Gunting"){
            return "Kalah";
        }else if (e == "Kertas"){
            return "Seri";
        }
    }
}

void v(string p, string e){
    string h = m(p, e);
    cout << "Anda " << h << "!" << endl;
}

int main(){
    string t[3] = {"Batu", "Gunting", "Kertas"};
    int p, e;
    string u;
    do{
        system("cls");
        cout << "=== Game Batu Gunting Kertas ===" << endl;
        for(int i = 0; i < 3; i++){
            cout << i + 1 << ". " << t[i] << endl;
        }
        cout << "Masukkan pilihan Anda : "; cin >> p;
        e = (rand() % 3) + 1;
        cout <<"=====================" << endl;
        cout << "Pilihan Anda : " << t[p-1] << endl;
        cout << "Pilihan Lawan : " << t[e-1] << endl;
        v(t[p-1], t[e-1]);
        cout << "Apakah Anda ingin mengulangi <y/n>? "; cin >> u;
    }while(u == "y" || u == "Y" || u == "ya" || u == "Ya");
    cout << "\nTerimakasih sudah memainkan Game ini!";
return 0;
}

// Program ini memainkan Game Batu Gunting Kertas untuk pengguna melawan komputer.