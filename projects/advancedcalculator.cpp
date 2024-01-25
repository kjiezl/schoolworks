#include <iostream>

using namespace std;

int main() {
    double result;
    char operation;
    
    cin >> result;

    while (true) {
        cin >> operation;

        if (operation == 'q' || operation == 'Q') {
            break;
        }

        double num;
        cin >> num;

        switch (operation) {
            case '+':
                result += num;
                break;
            case '-':
                result -= num;
                break;
            case '*':
                result *= num;
                break;
            case '/':
                if (num != 0) {
                    result /= num;
                } else {
                    cout << "Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid Operation" << endl;
                system("PAUSE");
                return 0;
                break;
        }

        system("CLS");
        cout << result;
    }
}