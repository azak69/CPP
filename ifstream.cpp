#include <iostream>
#include <fstream>
#include <string>
using namespace std;
	
int main(){
	ifstream myfile("teks.txt");
    string line;
    if (myfile.is_open()){
        while(getline(myfile, line)){
            cout << line << endl;
        }
        myfile.close();
    } else {
        cout << "File tidak bisa dibuka!";
    }
}