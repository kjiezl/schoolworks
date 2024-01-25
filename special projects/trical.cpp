#include <iostream>
//for string to int conversion
#include <sstream>
// math absolute abs() function
#include <stdlib.h>

using namespace std;

// TRINOMIAL CALCULATOR
// ax^2 + bx + c

// converts from string to int
int stringToInt(string i) {
	stringstream ss;
	int j;
	ss << i;
	ss >> j;
	return j;
}

// converts from int to string
string intToString(int i) {
	ostringstream ss;
	ss << i;
	return ss.str();
}

// returns the higher value of the 2 parameters
int max(int a, int b) {
	a = abs(a);
	b = abs(b);
	if(a >= b) {
		return a;
	} else {
		return b;
	}
}

string factoring(string inp) {
	
	string terms[3];

	for(int i=0, j=0; i<inp.length(); i++) {
		
		// checks for - and + then proceeds to next term
		if(inp.at(i) != '0' && (inp.at(i) == '-' || inp.at(i) == '+'))
			j++;
		
		// ignores spaces, positives, and exponent symbol
		if(inp.at(i) != ' ' && inp.at(i) != '+' && inp.at(i) != '^')
			terms[j] += inp.at(i);
		
	}

	string letters[3] = {"", "", ""};
	int numbers[3] = {0, 0, 0};

	for(int j=0; j<3; j++) {
		string temp = "";

		for(int i=0; i<terms[j].length(); i++) {
			if(!isalpha(terms[j].at(i))) {
				// a number
				temp += terms[j].at(i);
			} else {
				// its a letter
				letters[j] = terms[j].at(i);
				break;
			}
		}

		// convert gatherd numbers to string
		if(temp == "-0") {
			numbers[j] = -1;
		} else {
			numbers[j] = stringToInt(temp);
		}
	}
	
	// making default value to 1 in variables
	if(numbers[0] == 0) numbers[0] = 1;
	if(numbers[1] == 0) numbers[1] = 1;
	if(numbers[2] == 0) numbers[2] = 1;
	
	//for negative numbers
	int limit = max(numbers[0], numbers[2]);
	int start = -1 * limit;

	// FIRST TERM = a * c
	// SECOND TERM = (a * d) + (b * c)
	// THIRD TERM = b * d

	//hit and miss approach with limits
	
	int f1 = 0;
	int f2 = 0;
	int f3 = 0;
	int f4 = 0;
	for(int a=start; a<=limit; a++) {
		for(int b=start; b<=limit; b++) {
			for(int c=start; c<=limit; c++) {
				for(int d=start; d<=limit; d++) {
					if(numbers[0] == a*c
					&& numbers[1] == (a*d + b*c)
					&& numbers[2] == b*d) {
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

	if(f1 != 0) {
		// output
		string out = "";
		string s1 = intToString(f1);
		string s2 = intToString(f2);
		string s3 = intToString(f3);
		string s4 = intToString(f4);
		
		if(f1 == 1) {
			out = "(" + letters[0];
		} else if(f1 == -1) {
			out = "(-" + letters[0];
		} else {
			out = "(" + s1 + letters[0];
		}
		
		if(f2 == 1 && letters[2] != "") {
			// only show letters
			out = out + "+" + letters[2] + ")";
		} else if(f2 == -1 && letters[2] != "") {
			// negative letter
			out = out + "-" + letters[2] + ")";
		} else if(f2 >= 0) {
			out = out + "+" + s2 + letters[2] + ")";
		} else {
			out = out + s2 + letters[2] + ")";
		}
		
		if(f3 == 1) {
			out = out + "(" + letters[0];
		} else if(f3 == -1) {
			out = out + "(-" + letters[0];
		} else {
			out = out + "(" + s3 + letters[0];
		}
		
		if(f4 == 1 && letters[2] != "") {
			// only show letters
			out = out + "+" + letters[2] + ")";
		} else if(f4 == -1 && letters[2] != "") {
			// negative letter
			out = out + "-" + letters[2] + ")";
		} else if(f4 >= 0) {
			out = out + "+" + s4 + letters[2] + ")";
		} else {
			out = out + s4 + letters[2] + ")";
		}
		
		return out;
	} else {
		// zero is invalid?
		return "Cannot refactor trinomial!";
	}
}



int main() {
	
	loop:
	
	string input;
	cout << "\n\n";
	cout << "Enter trinomial: ";
	cin >> input;
	//cout << "Result: ";
	cout << factoring(input);
	
	goto loop;

	system("PAUSE");
}
