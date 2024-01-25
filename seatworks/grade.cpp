#include <iostream>

using namespace std;

int main(){

    loop:

    double grade;

    cout << "Input grade: ";
    cin >> grade;

    if(grade >= 74.5 && grade <= 100){
        cout << "Remarks: Passed\n";
    } else if(grade <= 74.49 && grade >= 0){
        cout << "Remarks: Failed\n";
    } else{
        cout << "Remarks: Invalid\n";
    }

    system("PAUSE");

    goto loop;
}