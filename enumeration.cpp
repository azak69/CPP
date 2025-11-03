#include <iostream>
using namespace std;

enum hari{
    senin, selasa, rabu, kamis, jumat, sabtu, ahad
};

int main(){
    hari saiki, deadline;
    saiki = sabtu;
    deadline = jumat;

    int kurang = deadline - saiki;
    if (saiki < deadline){
        cout << "Deadline " << kurang << " hari lagi." << endl;
    }else if (saiki > deadline){
        cout << "Deadline " << kurang * -1 << " hari yang lalu" << endl;
    }else {
        cout << "Deadlinenya hari ini!" << endl;
    }
    return 0;
}

// Program ini mendemostrasikan penggunaan enumeration untuk membuat  nilai tetap tanpa perlu diubah-ubah lagi.