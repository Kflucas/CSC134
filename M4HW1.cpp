// Kelvin Flucas
// CSC134-0901
// M4HW1-silver
// 03/30/2025

#include <iostream>

using namespace std;

int main()
{
    int num;
    int i = 1;

    cout << "Please enter a number from 1 to 12" << endl;
    cin >> num;

    while (i <=12) {
        cout << num << " times " << i << " is " << num * i << "." << endl;
        i++;
    }

    return 0;
}
