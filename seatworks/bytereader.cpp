#include <iostream>

using namespace std;

int convertDecimal(string num){

    int decimalValue = 0;
    int base = 1;

    for(int i = num.length() -1; i >= 0; i--){
        if(num[i] == '1'){
            decimalValue += base;
        }
        base = base * 2;
    }

    return decimalValue;

}

int main(){
    
    loop:

    string binary;

    cout << "Input bit string: ";
    cin >> binary;

    cout << "Decimal equivalent: " << convertDecimal(binary) << endl;

    system("PAUSE");

    goto loop;
}