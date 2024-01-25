#include <iostream>

using namespace std;

//bmi calculator for self-improvement

void calculate(double height, double weight){
    
    double bmi;

    height = height * height;

    bmi = weight / height;
    
    if(bmi < 17){
        cout << "BMI: " << bmi << " -> Underweight";
    } else if(bmi >= 17 && bmi < 25){
        cout << "BMI: " << bmi << " -> Normal";
    } else if(bmi >= 25 && bmi < 30){
        cout << "BMI: " << bmi << " -> Overweight";
    } else{
        cout << "BMI: " << bmi << " -> Obese";
    }
}

int main(){

    cout << "=== BMI CACLULATOR ===\n";

    loop:

    double height, weight;

    cout << "Height (m): ";
    cin >> height;
    cout << "Weight (kg): ";
    cin >> weight;

    while(!height){
        system("cls");
        cout << "Enter valid height.\n\n";
        system("PAUSE");
        return 0;
    }

    while(!weight){
        system("cls");
        cout << "Enter valid weight.\n\n";
        system("PAUSE");
        return 0;
    }

    calculate(height, weight);

    cout << "\n\n";
    goto loop;
}