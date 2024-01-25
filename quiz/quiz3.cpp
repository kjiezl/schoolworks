#include <iostream>
#include <conio.h>
#include <cmath>
#include <windows.h>

using namespace std;

void twiceArray(int numArray[10]){
    int product[10] = {};
    for(int i = 0; i < 10; i++){
        product[i] = numArray[i] * 2;
    }

    cout << "Your doubled set of array: \n";
    for(int i = 0; i < 10; i++){
        cout << product[i] << "\t";
    }
}

void reverseArray(int numArray[10]){
    cout << "Your reversed array: \n";
    for(int i = 9; i >= 0; i--){
        cout << numArray[i] << "\t";
    }
}

bool inArray(int numArray[10], int num){
    // returns true if the value is found in the array
    for(int i = 0; i < 10; i++){
        if(numArray[i] == num){
            return true;
        }
    }

    return false;
}

int indexInArray(int arrayNum[10], int num){
    // returns the index of the value if found in the array
    int index = 0;
    for(int i = 0; i < 10; i++){
        if(arrayNum[i] == num){
            index = i;
        }
    }

    return index;
}

double getAverage(int numArray[10]){
    //returns the average value of the number array, rounded to the nearest 100ths. Yes, you may use only the round() function of cmath library 
    int sum;

    for(int i = 0; i < 10; i++){
        sum += numArray[i];
    }

    double average = sum / 10;

    return average;
}

void replaceValue(int numArray[10], int newNum, int num){
    //Replaces the value of the current pointed index in an array
    int index;

    for(int i = 0; i < 10; i++){
        if(numArray[i] == num){
            index = i;
        }
    }

    numArray[index] = newNum;

    cout << "New number array: \n";
    for(int i = 0; i < 10; i++){
        cout << numArray[i] << "\t";
    }
}

int maxNum(int numArray[10]){
    // returns the maximum number in the array

    int max = numArray[0];

    for(int i = 0; i < 10; i++){
        if(numArray[i] > max){
            max = numArray[i];
        }
    }

    return max;
}

int minNum(int numArray[10]){
    // returns the minimum value found in the array
    int min = numArray[0];

    for(int i = 0; i < 10; i++){
        if(numArray[i] < min){
            min = numArray[i];
        }
    }

    return min;
}

int arraySum(int numArray[10]){
    // returns the total or sum of all the values in the array

    int sum = 0;

    for(int i = 0; i < 10; i++){
        sum += numArray[i];
    }

    return sum;
}

void displayArray(int numArray[10]){
    // creatively displays the array contents

    cout << "Your numbers: \n";

    for(int i = 0; i < 10; i++){
        cout << numArray[i] << "\t";
    }

    cout << endl;
}

int main(){

    int numArray[10] = {};
    int num = 0;
    int num2 = 0;
    int newNum = 0;
    int decision;

    for(int i = 0; i < 10; i++){
        cout << "Input number " << i + 1 << ": ";
        cin >> numArray[i];
    }

    cout << endl << "What would you like to do?\n";
    cout << "1 - DISPLAY ARRAY\n2 - SUM OF THE ARRAY\n3 - FIND THE MINIMUM NUMBER\n4 - FIND THE MAXIMUM NUMBER\n5 - FIND THE AVERAGE\n6 - FIND THE INDEX OF THE NUMBER\n7 - REPLACE A NUMBER IN THE ARRAY\n8 - REVERSE ARRAY\n9 - MULTIPLY THE NUMBERS TWICE\n";
    cin >> decision;

    switch(decision){
        case 1:
            displayArray(numArray);
            break;
        
        case 2:
            cout << "Sum: " << arraySum(numArray);
            break;

        case 3:
            cout << "\nMin: " << minNum(numArray);
            break;
        
        case 4:
            cout << "\nMax: " << maxNum(numArray);
            break;
        
        case 5:
            cout << "\nAverage: " << getAverage(numArray);
            break;
        
        case 6:
            cout << "\nEnter number to find in array: ";
            cin >> num;

            if(inArray(numArray, num)){
                cout << "Number found at index: " << indexInArray(numArray, num);
            }else{
                cout << "Number not found in array. Please try again.\n";
                getch();
                system("cls");
                main();
            }
            break;
        
        case 7:
            cout << "\nEnter number to find in array: ";
            cin >> num2;
            if(inArray(numArray, num2)){
                cout << "Number found at index: " << indexInArray(numArray, num2);
            }else{
                cout << "Number not found in array. Please try again.\n";
                getch();
                system("cls");
                main();
            }
             
            cout << "\nEnter number to replace: \n";
            cin >> newNum;
            replaceValue(numArray, newNum, num2);
            break;
        
        case 8:
            reverseArray(numArray);
            break;

        case 9:
            twiceArray(numArray);
            break;
        
        default:
            cout << "\n\nTry again.";
            getch();
            system("cls");
            main();
            break;
    }

    string answer;

    cout << "\nWould you like to start again? (Y/N)\n";
    cin >> answer;

    if(answer == "y" || answer == "Y"){
        system("CLS");
        main();
    } else if(answer == "n" || answer == "N"){
        system("CLS");
        cout << "Closing program...";
        getch();
    }
}