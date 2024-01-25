#include <iostream>

using namespace std;

/*
Create a C++ Program that will display "Happy Birthday\n" 7 times.
And display "Happy New Year\n" 3 times after the happy birthdays.
*/

int main(){

    int count = 1;

    do{
        cout << "Happy Birthday\n";
        count++;

        while(count > 7 && count <= 10){
            cout << "Happy New Year\n";
            count++;
        }
    } while(count <= 7);
}