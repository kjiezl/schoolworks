#include <iostream>
#include <string>

// MEAN, MEDIAN, MODE CALCULATOR

/*
    TO FIX:
        - decimals won't work in calculation
*/

using namespace std;

void arrange(double arr[], int count){
    for(int i = 0; i < count -1; i++){
        for(int j = 0; j < count -i - 1; j++){
            if(arr[j] > arr[j + 1]){
                double a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }
}

int main(){

    while(true){
        string inp;

        cout << "Finding the mean, median, and mode. Enter series of numbers seperated by space:\n";
        getline(cin, inp);

        bool containsNumbers = true;

        for(int i = 0; i < inp.length(); i++){
            char c = inp[i];
            if(!isdigit(c) && c != ' ' && c != '.'){
                containsNumbers = false;
                break;
            }
        }

        while(!containsNumbers){
            system("cls");
            cout << "Invalid series of numbers." << endl;
            system("PAUSE");
            return 0;
        }

        double sum = 0;
        int count = 0;
        double num;
        double numbers[100];

        for(size_t i = 0; i < inp.length(); i++){
            while(i < inp.length() && inp[i] == ' '){
                i++;
            }

            num = 0;
            while(i < inp.length() && isdigit(inp[i])){
                num = num * 10 + (inp[i] - '0');
                i++;
            }

            sum += num;
            numbers[count] = num;
            count++;
        }

        double mean = 0;
        mean = sum / count;

        cout << "Mean: " << mean << endl;

        arrange(numbers, count);

        if(count % 2 != 0){
            int mid = (count / 2);
            double median = numbers[mid];
            cout << "Median: " << median << endl;
        } else{
            int mid1 = (count / 2) - 1;
            int mid2 = count / 2;
            double median = (numbers[mid1] + numbers[mid2]) / 2;
            cout << "Median: " << median << endl;
        }

        int maxRepeat = 0;
        int curRepeat = 1;
        double mode = numbers[0];

        for(int i = 1; i < count; i++){
            if(numbers[i] == numbers[i - 1]){
                curRepeat++;
            } else{
                curRepeat = 1;
            }

            if(curRepeat > maxRepeat){
                maxRepeat = curRepeat;
                mode = numbers[i];
            }
        }

        if(maxRepeat > 1){
            cout << "Mode: " << mode << endl;
        } else{
            cout << "Mode: None" << endl;
        }
    }
}