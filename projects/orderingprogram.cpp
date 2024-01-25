#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void displayMenu(const string menuItem[], double menuPrice[], int menuSize){
    cout << "\nMENU:\n";
    for(int i = 0; i < menuSize; i++){
        cout << "<" << i + 1 << "> " << menuItem[i] << "\t(P " << menuPrice[i] << ")\n";
    }
}

int main(){
    const int maxOrders = 100;
    string menuItem[] = {"Chicken", "Rice", "Fries", "Coke", "Burger"};
    double menuPrice[] = {20.0, 10.0, 15.0, 20.0, 10.0};
    int order[maxOrders];
    int quantity[maxOrders];
    int orderCount = 0;

    char addMore;

    do{
        displayMenu(menuItem, menuPrice, 5);

        cout << "Choice: ";
        cin >> order[orderCount];

        cout << "Quantity: ";
        cin >> quantity[orderCount];

        cout << "Do you wish to add more to your order? (Y/N): ";
        cin >> addMore;

        orderCount++;
    } while(addMore == 'y' || addMore == 'Y');


    double total = 0.0;

    cout << "\nSUMMARY OF ITEMS ORDERED:\n\n";

    cout << setw(10) << "ITEM" << setw(10) << "QTY" << setw(10) << "PRICE" << setw(15) << "SUB-TOTAL\n";

    for(int i = 0; i < orderCount; i++){
        cout << setw(10) << menuItem[order[i] - 1] << setw(10) << quantity[i] << setw(10) << menuPrice[order[i] - 1] << setw(14) << quantity[i] * menuPrice[order[i] - 1] << endl;
        total += quantity[i] * menuPrice[order[i] - 1];
    }

    cout << "\nTOTAL: " << total << endl;

    double payment;
    cout << "Enter payment amount: P ";
    cin >> payment;

    double change = payment - total;
    cout << "CHANGE: P " << change << endl;

    ofstream receiptFile("receipt.txt");
    receiptFile << "Order was:\n";
    receiptFile << setw(10) << "ITEM" << setw(10) << "QTY" << setw(10) << "PRICE" << setw(15) << "SUB-TOTAL\n";
    for (int i = 0; i < orderCount; ++i) {
        receiptFile << setw(10) << menuItem[order[i] - 1] << setw(10) << quantity[i] << setw(10) << menuPrice[order[i] - 1] << setw(14) << quantity[i] * menuPrice[order[i] - 1] << endl;
    }
    receiptFile << "\n" << setw(40) << "TOTAL: " << total << endl;
    receiptFile << setw(40) << "PAYMENT: " << payment << endl;
    receiptFile << setw(40) << "CHANGE: " << change << endl;
    system("start notepad receipt.txt");
    //system("start winword receipt.docx");
    //receiptFile.close();

    cout << "\n============END=============\n";

    system("PAUSE");

}