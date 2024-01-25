#include <iostream>
#include <sstream>

using namespace std;

//TO FIX: Error message

string intToString(int i){
    stringstream ss;
    ss << i;
    return ss.str();
}

int max(int a, int b){
    a = abs(a);
    b = abs(b);

    if(a > b){
        return a;
    } else{
        return b;
    }
}

string factor(int n1, int n2, int n3){

    int numbers[3] = {n1, n2, n3};

    int limit = max(numbers[0], numbers[2]);
    int start = -1 * limit;

    /*
        (ax+b)(cx+d)
    */

    int f1;
	int f2;
	int f3;
	int f4;
	for(int a = start; a <= limit; a++) {
		for(int b = start; b <= limit; b++) {
			for(int c = start; c <= limit; c++) {
				for(int d = start; d <= limit; d++) {
					if(numbers[0] == a * c
					&& numbers[1] == (a * d + b * c)
					&& numbers[2] == b * d) {
						f1 = a;
						f2 = b;
						f3 = c;
						f4 = d;
						break;
					} 
				}
			}
		}
	}
    

    if(f1 != 0){

        string out = "";
        string n1 = intToString(f1);
        string n2 = intToString(f2);
        string n3 = intToString(f3);
        string n4 = intToString(f4);
        string x = "x";

        if(f1 == 1){
            out = "(" + x;
        } else if(f1 == -1){
            out = "(-" + x;
        } else{
            out = "(" + n1 + x;
        }

        if(f2 <= -1){
            out = out + n2 + ")";
        } else{
            out = out + "+" + n2 + ")";
        }

        if(f3 == 1){
            out = out + "(" + x;
        } else if(f3 == -1){
            out = out + "(-" + x;
        } else{
            out = out + "(" + n3 + x;
        }

        if(f4 <= -1){
            out = out + n4 + ")";
        } else{
            out = out + "+" + n4 + ")";
        }
        
        return out;
    } else{
        return "Cannot factor trinomial.";
    }
}

int main(){

    loop:
    
    int num1, num2, num3;

    cout << "\n\nPlease input your data in the format: Ax^2 + Bx + C\n";
    cout << "A: ";
    cin >> num1;

    if(num1){
        cout << "B: ";
    } else{
        cout << "Invalid input.\n";
        system("PAUSE");
        return 0;
    }

    cin >> num2;

    if(num2){
        cout << "C: ";
    } else{
        cout << "Invalid input.\n";
        system("PAUSE");
        return 0;
    }

    cin >> num3;

    if(num3){
        cout << "\nResult: \n";
        cout << factor(num1, num2, num3);

        cout << endl;

        goto loop;
    } else{
        cout << "Invalid input.\n";
        system("PAUSE");
        return 0;
    }
}