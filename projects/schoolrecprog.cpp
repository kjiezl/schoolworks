#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Student{
    string name;
    string lrn;
    string gender;
    string age;
};

struct Grades{
    double math;
    double filipino;
    double english;
    double science;
    double average;
};

int main(){

    Student student;
    Grades grades;
    int input;
    int studentCount = 0;
    int studentNum;
    int editInput;
    int subCount;

    double ave;
    double gradesTotal;

    bool notEmpty = false;

    vector<string> studentName;
    vector<string> studentLRN;
    vector<string> studentGender;
    vector<string> studentAge; 

    vector<double> mathSub;
    vector<double> filipinoSub;
    vector<double> englishSub;
    vector<double> scienceSub;
    vector<double> gradeAverage;

    while(true){
        system("CLS");
        cout << "<1> Add students\n<2> Edit grades\n<3> Show all students\n<4> Exit\n";
        cout << "Input: ";
        cin >> input;

        switch(input){
            case 1:
                gradesTotal = 0.0;
                subCount = 0;
                system("CLS");
                studentCount++;
                notEmpty = true;
                cin.ignore();

                cout << "STUDENT " << studentCount << endl;

                cout << "\nFirst Name: ";
                getline(cin, student.name);
                studentName.push_back(student.name);

                cout << "Student LRN: ";
                getline(cin, student.lrn);
                studentLRN.push_back(student.lrn);

                cout << "Sex: ";
                getline(cin, student.gender);
                studentGender.push_back(student.gender);

                cout << "Age: ";
                getline(cin, student.age);
                studentAge.push_back(student.age);

                cout << "\nSTUDENT GRADES\n";

                cout << "Math: ";
                cin >> grades.math;
                mathSub.push_back(grades.math);

                cout << "Filipino: ";
                cin >> grades.filipino;
                filipinoSub.push_back(grades.filipino);

                cout << "English: ";
                cin >> grades.english;
                englishSub.push_back(grades.english);

                cout << "Science: ";
                cin >> grades.science;
                scienceSub.push_back(grades.science);
                
                if(grades.math != 0){
                    gradesTotal += grades.math;
                    subCount++;
                }

                if(grades.filipino != 0){
                    gradesTotal += grades.filipino;
                    subCount++;
                }

                if(grades.english != 0){
                    gradesTotal += grades.english;
                    subCount++;
                }

                if(grades.science != 0){
                    gradesTotal += grades.science;
                    subCount++;
                }

                ave = gradesTotal / subCount;

                gradeAverage.push_back(ave);

                system("PAUSE");

                break;

            case 2:
                if(notEmpty == true){
                    cout << "Input student number: ";
                    cin >> studentNum;
                    studentNum -= 1;
                    system("CLS");

                    cout << "Student Name: " << studentName[studentNum] << 
                    "\nStudent LRN: " << studentLRN[studentNum] <<
                    "\nAge: " << studentAge[studentNum] <<
                    "\nSex: " << studentGender[studentNum] <<
                    "\n\nSTUDENT GRADES:\n";

                    cout << "Math: ";
                    if(mathSub[studentNum] >= 75){
                        cout << mathSub[studentNum];
                    } else if(mathSub[studentNum] == 0){
                        cout << "N/A";
                    } else if(mathSub[studentNum] < 75 && mathSub[studentNum] > 0){
                        cout << "FAIL";
                    }

                    cout << "\nFilipino: ";
                    if(filipinoSub[studentNum] >= 75){
                        cout << filipinoSub[studentNum];
                    } else if(filipinoSub[studentNum] == 0){
                        cout << "N/A";
                    } else if(filipinoSub[studentNum] < 75 && filipinoSub[studentNum] > 0){
                        cout << "FAIL";
                    }

                    cout << "\nEnglish: ";
                    if(englishSub[studentNum] >= 75){
                        cout << englishSub[studentNum];
                    } else if(englishSub[studentNum] == 0){
                        cout << "N/A";
                    } else if(englishSub[studentNum] < 75 && englishSub[studentNum] > 0){
                        cout << "FAIL";
                    }

                    cout << "\nScience: ";
                    if(scienceSub[studentNum] >= 75){
                        cout << scienceSub[studentNum];
                    } else if(scienceSub[studentNum] == 0){
                        cout << "N/A";
                    } else if(scienceSub[studentNum] < 75 && scienceSub[studentNum] > 0){
                        cout << "FAIL";
                    }

                    cout << "\nAverage: " << gradeAverage[studentNum];
                    cout << "\n\nChoose the subject to edit grades: " <<
                    "\n<1> Math" << "\n<2> Filipino" << "\n<3> English" << "\n<4> Science" << "\n<5> Exit\n";

                    cout << "Input: ";
                    cin >> editInput;

                    switch(editInput){
                        case 1:
                            cout << "Input new grade in Math: ";
                            cin >> mathSub[studentNum];
                            break;
                        case 2:
                            cout << "Input new grade in Filipino: ";
                            cin >> filipinoSub[studentNum];
                            break;
                        case 3:
                            cout << "Input new grade in English: ";
                            cin >> englishSub[studentNum];
                            break;
                        case 4:
                            cout << "Input new grade in Science: ";
                            cin >> scienceSub[studentNum];
                            break;
                        case 5:
                            continue;
                            break;
                    }

                    system("CLS");

                    cout << "Student Name: " << studentName[studentNum] << 
                    "\nStudent LRN: " << studentLRN[studentNum] <<
                    "\nAge: " << studentAge[studentNum] <<
                    "\nSex: " << studentGender[studentNum] <<
                    "\n\nSTUDENT GRADES:\n";

                    cout << "Math: ";
                    if(mathSub[studentNum] >= 75){
                        cout << mathSub[studentNum];
                    } else if(mathSub[studentNum] == 0){
                        cout << "N/A";
                    } else if(mathSub[studentNum] < 75 && mathSub[studentNum] > 0){
                        cout << "FAIL";
                    }

                    cout << "\nFilipino: ";
                    if(filipinoSub[studentNum] >= 75){
                        cout << filipinoSub[studentNum];
                    } else if(filipinoSub[studentNum] == 0){
                        cout << "N/A";
                    } else if(filipinoSub[studentNum] < 75 && filipinoSub[studentNum] > 0){
                        cout << "FAIL";
                    }

                    cout << "\nEnglish: ";
                    if(englishSub[studentNum] >= 75){
                        cout << englishSub[studentNum];
                    } else if(englishSub[studentNum] == 0){
                        cout << "N/A";
                    } else if(englishSub[studentNum] < 75 && englishSub[studentNum] > 0){
                        cout << "FAIL";
                    }

                    cout << "\nScience: ";
                    if(scienceSub[studentNum] >= 75){
                        cout << scienceSub[studentNum];
                    } else if(scienceSub[studentNum] == 0){
                        cout << "N/A";
                    } else if(scienceSub[studentNum] < 75 && scienceSub[studentNum] > 0){
                        cout << "FAIL";
                    }

                    cout << "\nAverage: " << gradeAverage[studentNum] << "\n\n";

                    system("PAUSE");
                }
                break;

            case 3:
                if(notEmpty == true){
                    system("CLS");
                    cout << setw(15) << "LRN" << setw(15) << "NAME" << setw(15) << "MATH" << setw(15) << "FILIPINO" << setw(15) << "ENGLISH" << setw(15) << "SCIENCE" << setw(15) << "AVERAGE\n\n";
                    for(int i = 0; i < studentCount; i++){
                        cout << setw(15) << studentLRN[i] << setw(15) << studentName[i] << setw(15);

                        if(mathSub[studentNum] >= 75){
                            cout << mathSub[studentNum] << setw(15);
                        } else if(mathSub[studentNum] == 0){
                            cout << "N/A" << setw(15);
                        } else if(mathSub[studentNum] < 75 && mathSub[studentNum] > 0){
                            cout << "FAIL" << setw(15);
                        }

                        if(filipinoSub[studentNum] >= 75){
                            cout << filipinoSub[studentNum] << setw(15);
                        } else if(filipinoSub[studentNum] == 0){
                            cout << "N/A" << setw(15);
                        } else if(filipinoSub[studentNum] < 75 && filipinoSub[studentNum] > 0){
                            cout << "FAIL" << setw(15);
                        }

                        if(englishSub[studentNum] >= 75){
                            cout << englishSub[studentNum] << setw(15);
                        } else if(englishSub[studentNum] == 0){
                            cout << "N/A" << setw(15);
                        } else if(englishSub[studentNum] < 75 && englishSub[studentNum] > 0){
                            cout << "FAIL" << setw(15);
                        }

                        if(scienceSub[studentNum] >= 75){
                            cout << scienceSub[studentNum] << setw(15);
                        } else if(scienceSub[studentNum] == 0){
                            cout << "N/A" << setw(15);
                        } else if(scienceSub[studentNum] < 75 && scienceSub[studentNum] > 0){
                            cout << "FAIL" << setw(15);
                        }

                        cout << gradeAverage[i] << "\n\n";
                    }

                    system("PAUSE");
                    //continue;
                }
                break;

            case 4:
                return 0;
                break;
            
            default:
                system("CLS");
                cout << "Please choose within the following choices only.\n";
                cin.ignore();
                system("PAUSE");
                continue;
                break;
        }
    }
}