#include <iostream>

using namespace std;

int main(){

    system("PAUSE");

    for(int i = 1; i <= 10; i++){
        if(i % 2 == 0){
            cout << i << " even\n";
        } else{
            cout << i << endl;
        }
    }

    system("PAUSE");
}