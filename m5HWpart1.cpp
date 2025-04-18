// Kelvin Flucas
// CSC134-0901
// M4LAB1(bronze)
// 04/16/2025

#include <iostream>
using namespace std;

int main() {
    
    string month1, month2, month3;

   
    double rain1, rain2, rain3;

    cout << "Enter first month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << " in inches: ";
    cin >> rain1;

    cout << "Enter second month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << " in inches: ";
    cin >> rain2;

    cout << "Enter third month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << " in inches: ";
    cin >> rain3;

  
    double average = (rain1 + rain2 + rain3) / 3.0;

    cout << "The average rainfall for " 
         << month1 << ", " << month2 << ", and " << month3 
         << " is " << average << " inches." << endl;

    return 0;
}

