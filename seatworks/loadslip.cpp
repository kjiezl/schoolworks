#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

struct Info{
        string num, sub, sec, desc, sched, room;
        int units;
    };

int main(){

    string line = "________________________________________________________________________________________________________________________________________________________________________________\n\n";

    cout << "\n\n\n";
    
    cout << "                                                                  Negros Oriental State University\n";
    cout << "                  ENROLLMENT LOAD                                     (http://www.norsu.edu.ph)\n";
    cout << "                       SLIP                                              Main Campus I and II                                             First Semester SY 2023-2024\n";
    cout << "                                                                  Office of the University Registrar\n\n\n";

    cout << line;

    cout << "             Student Number : 202303704                                                                                          Scholarship :\n";
    cout << "                       Name : ONG, KWENN JIEZL LUGA                                                                              Amount Paid : 0.00\n";
    cout << "     Date of Birth / Gender : 2004-10-08 (F)                                                                                    OR Number(s) : /\n";
    cout << "             College/Course : Bachelor of Science in Information Technology(CAS)                                                   Date Paid : 2023-08-18/2023-08-18\n";
    cout << "                Major/Minor :                                                                                              Yr Level & Status : 1 - New\n";

    cout << line;
    
    cout << "          Subject      Sec   Description                                                                            Schedule                          Room               Units\n";

    
    Info info[] = {
        {"  1", "FIL 1", "AQ", "Akademiko sa Wikang Filipino", "M-W-F 9:00-10:00 am", "TBA", 3},
        {"  2", "GE 6", "N", "Art Appreciation", "M-W-F 8:00-9:00 am", "TBA", 3},
        {"  3", "ITS 101", "C", "Computer Programming I", "M-T-W-TH-F 1:00-2:00 pm", "SKY LAB 2", 3},
        {"  4", "ITS 100", "C", "Introduction to Computing", "M-W-F 7:00-8:00 pm", "SKY LAB 1", 3},
        {"  5", "GE 4", "S", "Mathematics in the Modern World", "T-TH 2:30-4:00 pm", "TBA", 3},
        {"  6", "NSTP 1-AFROTC", "L", "National Service Training Program 1-Air Force ROTC", "TBA TBA", "TBA", 3},
        {"  7", "PE 1", "BN", "Physical Fitness and Health", "M-W 2:00-3:00 pm", "GYM", 2},
        {"  8", "GE 5", "D", "Purposive Communication", "T-TH 4:00-5:00 pm", "CAS 301", 3}
    };

    char buffer[256] = {0};

    for(auto data : info){
        sprintf(buffer, "%-5s %-16s %-5s %-86s %-33s %-17s %2d", data.num.c_str(), data.sub.c_str(), data.sec.c_str(), data.desc.c_str(), data.sched.c_str(), data.room.c_str(), data.units);
        cout << buffer << "\n";
    }

    cout << "\n";

    cout << line;

    cout << "  N.B. No Refund for withdrawal of enrollement, dropping of                                                                               Total Units : 23\n";
    cout << "  courses and subjects, etc for whatever reason.                                                                                       Total Subjects : 8\n\n";

    cout << "                          __________________________                                                                                    Date Enrolled : 2023-08-18 06:09:58\n";
    cout << "                          Student or Parent/Guardian                                                                                       Stamped by : ____________\n";

    cout << "  Encoded by : [0]   Printed by Print\n\n\n";
    return 0;
}