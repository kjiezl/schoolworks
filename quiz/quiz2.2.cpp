#include <iostream>
#include <string>

using namespace std;

/*
Create a C++ Program that will only accept any string of characters (words)
but will only terminate when it encounters the words "hold" or "wow" or "hello"
*/

int main(){
    
    string input;
    
    while(true){
        cout << "Enter any word: " << endl;
        getline(cin, input);

        if(input == "hold" || input == "wow" || input == "hello"){
            cout << "To terminate the program, press enter." << endl;
            system("PAUSE");
            break;
        }
    }
}