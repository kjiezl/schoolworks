#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

string randomNums(int min, int max, int count){

    int range = max - min + 1;
    vector<int> value;
    int num;

    for(int i = 0; i < count; i++){

        bool check;

        do{
            num = rand() % range + min;
            check = true;

            for(int j = 0; j < i; j++){
                if(num == value[j]){
                check = false;
                break;
                }
            }
        } while (!check);
             value.push_back(num);
             cout << num << "  ";
    }

    return "\n";
}

int main(){

    loop:

    int minValue, maxValue, countValue;
    srand(time(0));

    cout << "Min: ";
    cin >> minValue;
    cout << "Max: ";
    cin >> maxValue;
    cout << "Count: ";
    cin >> countValue;
    
    int range = maxValue - minValue + 1;

    if(countValue > range){
        cout << "Count cannot be greater than the range.\n";
        system("PAUSE");
        return 0;
    } else{
        cout << "Result: \n" << randomNums(minValue, maxValue, countValue);
        system("PAUSE");
        goto loop;
    }
}