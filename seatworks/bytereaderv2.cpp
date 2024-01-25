#include <iostream>

using namespace std;

int main(){

    //loop:

    string bit = "";

    cout << "Bit String: ";
    cin >> bit;

    int counter = 7;
    int dec = 0;
    int twoFactor = 1;

    while(counter >= 0){
        if(bit[counter] == '1'){
            dec += twoFactor;
            //twoFactor *= 2;
        }
        twoFactor *= 2;
        counter--;
    }

    cout << "Decimal Equivalent: " << dec << endl;

    //goto loop;
}