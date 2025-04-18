// Kelvin Flucas
// CSC134-0901
// M5T2
// 04/15/2025

#include <iostream>

using namespace std;


int square(int num) {
    return num * num;
}


void printAnswer(int number, int squared) {
    cout << number << " squared is " << squared << endl;
}


int main() {
    for (int i = 1; i <= 10; ++i) {
        int sq = square(i);
        printAnswer(i, sq);
    }
    return 0;
}