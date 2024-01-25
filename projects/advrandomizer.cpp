#include <iostream>
#include <windows.h>
#include <conio.h>

int randomNum(int start, int end){

    int num;
    int range = end - start + 1;

    num = rand() % range + start;

    return num;
}

using namespace std;

int main(){

    system("cls");
    int start, end;

    cout<<"Randomize from Range \n";
    cout<<"Start: ";
    cin>>start;
    cout<<"End: ";
    cin>>end;
    system ("cls");

    if(!start || !end){
        system("CLS");
        cout<<"Invalid Input!!"<<endl;
        system("PAUSE");
    }else{
        if(start > end){
            system("CLS");
            cout<< "Start cannot be greater than end.\n\n";
            system("PAUSE");
        }else if(start < end){
            while(true){
                system("cls");
                cout<<"Your Random Number ("  << start << "-" << end << "):" << randomNum(start, end)<< endl;
                if(getch() == 'q'){
                    system("cls");
                    cout << "Terminating program." << endl;
                    getch();
                    return 0;
                }
            }
        }else{
            system("CLS");
            cout << "Start and end are the same value.\n\n";
            system("PAUSE");
        }
    }
}