#include <iostream>

using namespace std;

int main(){

    string accNo = "05-21038-015";
    string accName = "CABALLERO, ROGELIO";
    int meterNo = 503141;

    cout << "\n\nAcc No: " << accNo << endl;
    cout << accName << endl;
    cout << "BRGY. TROSO, SAN CARLOS, null, San Carlos City\n";
    cout << "Meter No: " << meterNo << "\n\n";

    cout << "--READING DATE--       --READING--         --KWH USED--\n\n";
    cout << "2023-08-01                   25157\n";
    cout << "2023-09-01                 25425.0                268.0\n";

    cout << "DUE DATE: Sep 10, 2023                    Rate: 11.7300\n";
    cout << "Terned Payments: 0                    Unpaid Balance: 0\n";
    cout << "Meter Reader: mr56\n\n";

    cout << "*                         Rates                    Amnt\n";
    cout << "   -------------------------------------------------\n";
    
    cout << "GEN AND TRANS REVENUES\n";
    cout << "Generation Sys.     x   7.0324/kWh             1,884.68\n";
    cout << "Trans. Demand       x    .0000/kWh                  .00\n";
    cout << "Trans. System       x    .6341/kWh               169.94\n";
    cout << "System Loss         x    .9203/kWh               246.64\n";
    cout << "Trans. System       x    .6341/kWh               169.94\n";
    cout << "OGA                 x    .0000/kWh                  .00\n";
    cout << "OTCA Demand         x    .0000/kWh                  .00\n";
    cout << "OTCA System         x    .0000/kWh                  .00\n";

    cout << "                       SUB-TOTAL               2,301.26\n";

    cout << "DISTRIBUTION REVENUES\n";
    cout << "Dis. Demand         x    .0000/kWh                  .00\n";
    cout << "Dis. System         x    .5782/kWh               154.96\n";
    cout << "Supply Ret. Cust.   x    .0000/kWh                  .00\n";
    cout << "Supply System       x    .6001/kWh               160.83\n";
    cout << "Metering Ret.       x   5.0000/kWh                 5.00\n";
    cout << "Metering Sys.       x    .4326/kWh               115.94\n";
    cout << "RFS                 x    .2904/kWh                77.83\n";

    cout << "                       SUB-TOTAL                 514.56\n";

    return 0;
}