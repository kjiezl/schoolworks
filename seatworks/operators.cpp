#include <iostream>

using namespace std;

int main(){

    loop:

    float num1, num2;   

    cout << "Please input the needed data.\nA: ";
    cin >> num1;

    cout << "B: ";
    cin >> num2;

    float ans1 = num1 + num2;
    float ans2 = num1 - num2;
    float ans3 = num1 * num2;
    float ans4 = num1 / num2;

    cout << "\n\nBasic Arithmetics of the given data: \n";
    cout << "A + B = " << num1 << " + " << num2 << " = " << ans1 << endl;
    cout << "A - B = " << num1 << " - " << num2 << " = " << ans2 << endl;
    cout << "A * B = " << num1 << " * " << num2 << " = " << ans3 << endl;
    cout << "A / B = " << num1 << " / " << num2 << " = " << ans4 << "\n\n";

    system("PAUSE");
    
    goto loop;
}