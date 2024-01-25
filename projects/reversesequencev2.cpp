#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string inp;

    while(true){
        cout << "Enter a sentence: ";
        getline(cin, inp);

        bool containsNumbers = false;

        for(size_t i = 0; i < inp.size(); i++){
            char c = inp[i];
            if(isdigit(c)){
                containsNumbers = true;
                break;
            }
        }

        if(containsNumbers){
            cout << "\n";
            cout << "Error. Please enter words only!" << endl;
            cout << "\n";
        } else{
            int inplength = inp.length();
            string reversed = " ";

            for(int i = inplength - 1; i >= 0; i--){
                reversed += inp[i];
            }

            cout << "Reversed words: " << reversed << endl;
            break;
        }
    }

    system("PAUSE");
    //return 0;
}