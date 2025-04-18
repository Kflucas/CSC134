// Kelvin Flucas
// CSC134-0901
// M4LAB1(bronze)
// 04/16/2025

#include <iostream>
using namespace std;

int main() {
    double width, length, height;

    cout << "Enter the width of the block: ";
    cin >> width;
    while (width <= 0) {
        cout << "Width must be greater than 0. Try again: ";
        cin >> width;
    }

    cout << "Enter the length of the block: ";
    cin >> length;
    while (length <= 0) {
        cout << "Length must be greater than 0. Try again: ";
        cin >> length;
    }

    cout << "Enter the height of the block: ";
    cin >> height;
    while (height <= 0) {
        cout << "Height must be greater than 0. Try again: ";
        cin >> height;
    }

    double volume = width * length * height;

    cout << "The volume of the block is: " << volume << " cubic units." << endl;

    return 0;
}
