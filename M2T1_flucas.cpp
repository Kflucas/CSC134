// Kelvin Flucas
// CSC134-0901
// M2T1
// 02/10/2025

#include <iostream>

using namespace std;

int main()
{

string name = "Kelvin";
int num_apples = 15;
double price_each = 0.25;

cout << "Welcome to " << name << "'s apple farm!" << endl;

cout << "We have " << num_apples << " apples in stock" << endl;

cout << "Each apple costs $" << price_each << "." << endl;

double total_price = num_apples * price_each;

cout << "The total price for all " << num_apples;
cout << " apples is $" << total_price << "." << endl;
cout << "Thanks for coming by!" << endl;
}