#include <iostream>
using namespace std;

void swapAngka(int &a, int &b){
   int temp = a;
   a = b;
   b = temp;
}

int main()
{
   int x, y;
   cin >> x;
   cin >> y;
   cout << "x sebelum: " << x << "; " << "y sebelum: " << y << endl;
   swapAngka(x, y);
   cout << "x setelah: " << x << "; " << "y setelah: " << y << endl;

    return 0;
}

//Program ini mendemonstrasikan penggunaan pass by reference untuk mengganti nilai yang ada di main.