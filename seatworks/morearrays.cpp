#include <iostream>
#include <conio.h>
#include <cmath>
#include <windows.h>

using namespace std;

/*
    Given this base code, create a C++ program that will:

    1) Accept 10 user inputs; Provide the user the following menu:
        a) Input data (one by one).
        b) Reset the array and start over again.

    2) Finish the initialized functions and add them to the menu items.



    void replaceValue(){
    //Replaces the value of the current pointed index in an array
    }

    double getAverage(){
    //returns the average value of the number array, rounded to the nearest 100ths. Yes, you may use only the round() function of cmath library 
}
*/

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
    int newNum = 0;

    for(int i = 0; i < 10; i++){
        cout << "Input number " << i + 1 << ": ";
        cin >> numArray[i];
    }

    displayArray(numArray);
    cout << "Sum: " << arraySum(numArray);
    cout << "\nMin: " << minNum(numArray);
    cout << "\nMax: " << maxNum(numArray);
    cout << "\nAverage: " << getAverage(numArray);

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

    cout << "\nEnter number to replace: \n";
    cin >> newNum;

    replaceValue(numArray, newNum, num);

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