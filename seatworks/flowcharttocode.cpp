#include <iostream>

using namespace std;

int main(){

    int num1, num2, num3;

    cout << "Please input for num1: \n";
    cin >> num1;

    cout << "Please input for num2: \n";
    cin >> num2;

    cout << "Please input for num3: \n";
    cin >> num3;

    if(num1 > num2){
        if(num1 > num3){
            cout << "Num1 is the greatest value.\n";
        } else{
            cout << "Num3 is the greatest value.\n";
        }
    } else if(num2 > num3){
        cout << "Num2 is the greatest value.\n";
    } else{
        cout << "Num3 is the greatest value.\n";   
    }

    system("PAUSE");
    
}