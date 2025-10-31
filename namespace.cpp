#include <iostream>

namespace bilangan{
    void cetak(int a){
    std::cout << a << std::endl;
    }
}

namespace teks{
    void cetak(std::string a){
    std::cout << a << std::endl;
    }
}

// int main(){
//     bilangan::cetak(69);
//     teks::cetak("Kedamaian Abadi");
//     return 0;
// }

using namespace bilangan;
using namespace teks;

int main(){
    cetak(69);
    cetak("Kedamaian Abadi");
    return 0;
}

// Program ini mendemonstrasikan penggunaan namespace untuk menghindari konflik nama fungsi cetak.