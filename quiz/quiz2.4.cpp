#include <iostream>

using namespace std;

/*
Create a C++ Program that will loop through numbers 33 to 49.
Print only even numbers and print "odd" beside the number.
*/

int main(){
    for(int i = 33; i < 50; i++){
        if(i % 2 == 0){
            cout << i << " odd\n";
        }
    }
}