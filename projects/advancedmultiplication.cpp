#include <iostream>

using namespace std;

string table(int from, int to, int start, int end){

    for(int i = from; i <= to; i++){
        cout << "\n=========TABLE OF " << i << "=========" << endl;

        for(int j = start; j <= end; j++){
            cout << i << " x " << j << " = " << i * j << endl;
        }

        cout << "=========TABLE OF " << i << "=========" << endl;
    }

    return "\n";
}

int main(){

    int from, to, start, end;
    
    cout << "From Table: ";
    cin >> from;
    cout << "to Table: ";
    cin >> to;
    cout << "Multiplier Start: ";
    cin >> start;
    cout << "Multiplier End: ";
    cin >> end;

    if(from, to, start, end && from <= to && start <= end){
        cout << table(from, to, start, end);
        system("PAUSE");
    } else{
        system("CLS");
        cout << "[There was an invalid input]\n\n";
        system("PAUSE");
    }
}