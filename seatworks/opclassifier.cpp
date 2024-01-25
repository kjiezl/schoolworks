#include <iostream>

using namespace std;

int main(){

    loop:

    string op;

    cout << "Operator: ";
    cin >> op;

    if(op == "+"){
        cout << "Name: Arithemtic Operator\n";
        cout << "Description: Adds two operands\n";
        cout << "Example of usage: If A = 10 and B = 20, A + B = 30\n";
    } else if(op == "-"){
        cout << "Name: Arithemtic Operator\n";
        cout << "Description: Subtracts second operand from the first\n";
        cout << "Example of usage: If A = 10 and B = 20, A - B = -10\n";
    } else if(op == "*"){
        cout << "Name: Arithemtic Operator\n";
        cout << "Description: Multiplies both operands\n";
        cout << "Example of usage: If A = 10 and B = 20, A * B = 200\n";
    } else if(op == "/"){
        cout << "Name: Arithemtic Operator\n";
        cout << "Description: Divides numerator by de-numerator\n";
        cout << "Example of usage: If A = 10 and B = 20, B / A = 2\n";
    } else if(op == "%"){
        cout << "Name: Modulus Operator\n";
        cout << "Description: Remainder of after an integer division\n";
        cout << "Example of usage: If A = 10 and B = 20, B % A = 0\n";
    } else if(op == "++"){
        cout << "Name: Increment Operator\n";
        cout << "Description: Increases integer value by one\n";
        cout << "Example of usage: If A = 10, A++ will give 11\n";
    } else if(op == "--"){
        cout << "Name: Decrement Operator\n";
        cout << "Description: Decreases integer value by one\n";
        cout << "Example of usage: If A = 10, A-- will give 9\n";
    } else{
        cout << "Invalid operator.";
    }

    system("PAUSE");
    
    goto loop;

}