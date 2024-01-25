#include <iostream>

using namespace std;

/*
Create a C++ Program that will loop through numbers 50 to 120. 
For each odd number, output the word "even" beside the number. (Ex. 1 even)
And for each number divisible by 5, output four new lines (next line) 
*/


int main(){

    for(int i = 50; i <= 120; i++){
        if(i % 5 == 0){
            if(i % 2 != 0){
                cout << i << " even\n\n\n\n\n";
            } else{
                cout << i << "\n\n\n\n\n";
            }
        } else if(i % 2 != 0){
            cout << i << " even\n";
        } else{
            cout << i << endl;
        }
    }
}