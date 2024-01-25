#include <iostream>
#include <conio.h>

using namespace std;

void sumAveNums(float nums[10] = {}){
    
    float sum = 0;

    for(int i = 0; i < 10; i++){
        sum += nums[i];
    }

    cout << "Sum: " << sum << endl;

    float average = sum / 10;

    cout << "Average: " << average << endl;
}

void maxNum(float nums[10] = {}){
    int max = nums[0];
    for(int i = 0; i < 10; i++){
        if(nums[i] > max){
            max = nums[i];
        }
    }

    cout << "Max: " << max << endl;
}

void minNum(float nums[10] = {}){
    int min = nums[0];
    for(int i = 0; i < 10; i++){
        if(nums[i] < min){
            min = nums[i];
        }
    }

    cout << "Min: " << min << endl;
}

int main(){

    float nums[10] = {};

    for(int i = 0; i < 10; i++){
        cout << "Input Number " << i + 1 << ": ";
        cin >> nums[i];
    }

    cout << "\n=============THE STATS OF THE ARRAY ARE=============\n";
    sumAveNums(nums);
    maxNum(nums);
    minNum(nums);
    cout << "=============THE STATS OF THE ARRAY ARE=============\n";

    getch();
}