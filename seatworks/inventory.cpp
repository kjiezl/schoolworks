#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main(){

    string inp;
    int inv[256] = {};

    cout << "Input paragraph: \n";
    getline(cin, inp);

    for(char c : inp){
        if(c != ' '){
            int i = static_cast<int>(c);
            inv[i]++;
        }
    }

    cout << "\n=============THE INVENTORY OF THE ARRAY=============\n";
    for(int i = 0; i < 256; i++){
        if(inv[i] > 0){
            cout << static_cast<char>(i) << " -> " << inv[i] << endl;
        }
    }
    cout << "=============THE INVENTORY OF THE ARRAY=============\n";

    getch();
}