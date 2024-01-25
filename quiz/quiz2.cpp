#include <iostream>

using namespace std;

int main(){

    // using for loop

    cout << "Using for loop:\n\n";

    for(int i = 1; i <= 5; i++){
        cout << "Happy Birthday\n";
    }

    cout << "Happy New Year\n";

    // using do while loop
    
    cout << "\n\nUsing do while loop:\n\n";

    int count = 1;

    do{
        cout << "Happy Birthday\n";
        count++;

        if(count > 5){
            cout << "Happy New Year\n";
        }
    } while (count <= 5);

    system("PAUSE");

    return 0;

}