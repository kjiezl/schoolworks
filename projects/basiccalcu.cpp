#include <iostream>

using namespace std;

int operation(int num1, int num2, char op){

    int out;

    switch(op){

        case '+':
            out = num1 + num2;
            break;
        case '-':
            out = num1 - num2;
            break;
        case '*':
            out = num1 * num2;
            break;
        case '/':
            out = num1 / num2;
            break;
        default:
            cout << "Please enter valid operator.";
    }

    return out;
}

int main(){

    int num1, num2;
    char op;

    cout << "Num1: ";
    cin >> num1;
    cout << "Num2: ";
    cin >> num2;
    cout << "Operator: ";
    cin >> op;

    cout << num1 << " " << op << " " << num2 << " = " << operation(num1, num2, op) << endl << endl;

    system("PAUSE");
}