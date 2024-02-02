#include <iostream>
#include <conio.h>

using namespace std;

class Bank{
    public:

    string currentAcc;
    int currentID;
    float currentBal;

    string accName[100];
    string accPin[100];
    int accID[100];
    float accBalance[100];

    int nameCount = 0;
    int pinCount = 0;
    int idCount = 0;
    int balCount = 0;

    void start(){
    int option;

    cout << "Welcome to KNB. Please choose between the following options:\n\n";
    cout << "<1> Login\n<2> Create new account\n\nOption: ";
    cin >> option;

    switch(option){
        case 1:
            system("cls");
            login();
            break;
        case 2:
            system("cls");
            signup();
            break;
        default:
            cout << "\nInvalid option. Please try again.";
            getch();
            system("cls");
            break;
        }
    }

    void login(){
        string inpName;
        string inpPin;

        cout << "=== LOGIN ===\n\n";
        cout << "Account Name: ";
        cin >> inpName;
        cout << "Enter Pin: ";
        cin >> inpPin;

        for(int i = 0; i <= 100; i++){
            if(inpName == accName[i] && inpPin == accPin[i]){
                currentAcc = accName[i];
                currentID = accID[i];
                currentBal = accBalance[i];
                system("cls");
                info();
            } else if(inpName == accName[i] && inpPin != accPin[i]){
                cout << "\nIncorrect password. Please try again.";
                getch();
                system("cls");
                cin.clear();
                cin.ignore();
                login();
            } else if(i >= 100 && inpName != accName[i]){
                cout << "\nAccount does not exist.";
                getch();
                system("cls");
                cin.clear();
                cin.ignore();
                start();
            }
        }
    }

    void signup(){
        string inpName;
        string inpPin;

        cout << "=== CREATE NEW ACCOUNT ===\n\n";
        cout << "Account Name: ";
        cin >> inpName;
        cout << "Enter Pin: ";
        cin >> inpPin;

        currentAcc = inpName;
        nameCount++;
        pinCount++;
        idCount++;
        balCount++;

        accBalance[balCount] = 0.0;
        accID[idCount] = idCount;
        accName[nameCount] = inpName;
        accPin[pinCount] = inpPin;

        currentID = idCount;
        currentBal = accBalance[balCount];

        system("cls");
        info();
    }

    void info(){
        int inp;

        cout << "===========================================\n\n";
        cout << "ACCOUNT NAME: " << currentAcc << endl;
        cout << "ACCOUNT ID: 0000" << currentID << endl;
        cout << "ACCOUNT BALANCE: " << currentBal << "\n\n";
        cout << "===========================================\n\n";

        cout << "<1> Deposit\n<2> Withdraw Cash\n<3> Change Pin\n<4> Logout\n\n";
        cout << "Option: ";
        cin >> inp;

        switch(inp){
            case 1:
                float deposit;
                system("cls");
                cout << "=== DEPOSIT CASH ===\n\n";
                cout << "Enter Amount: ";
                cin >> deposit;

                currentBal += deposit;
                accBalance[currentID] = currentBal;
                system("cls");
                info();
                break;
            case 2:
                while(true){
                    float withdraw;
                    system("cls");
                    cout << "=== WITHDRAW CASH ===\n\n";
                    cout << "Enter Amount: ";
                    cin >> withdraw;

                    if(withdraw >= currentBal + 1){
                        cout << "\n\nInsufficient funds. Please try again.";
                        getch();
                        cin.clear();
                        cin.ignore();
                        system("cls");
                    } else{
                        currentBal -= withdraw;
                        accBalance[currentID] = currentBal;
                        break;
                    }
                }
                system("cls");
                info();
                break;
            case 3:
                while(true){
                    string newPin;
                    system("cls");
                    cout << "=== CHANGE PIN ===\n\n";
                    cout << "Enter New Pin: ";
                    cin >> newPin;

                    if(newPin == accPin[currentID]){
                        cout << "\n\nNew pin cannot be the same as the current pin.";
                        getch();
                        system("cls");
                        cin.clear();
                        cin.ignore();
                    } else{
                        cout << "\n\nPin changed successfully.";
                        accPin[currentID] = newPin;
                        getch();
                        break;
                    }
                }
                system("cls");
                info();
                break;
            case 4:
                system("cls");
                cout << "Logged out successfully.";
                getch();
                system("cls");
                start();
                break;
            default:
                cout << "\n\nInvalid option. Please try again.";
                getch();
                system("cls");
                cin.ignore();
                cin.clear();
                info();
                break;
        }
    }
};

int main(){
    while(true){
        Bank bank;
    
        bank.start();
    }
}
