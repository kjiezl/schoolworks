#include <iostream>

using namespace std;

int main(){

    system("PAUSE");
    
    for(int i = 1; i <= 20; i++){
        if(i % 2 == 0){
            cout << i << " odd\n";
        } else{
            cout << i << " even\n";
        }
    }

    system("PAUSE");
}