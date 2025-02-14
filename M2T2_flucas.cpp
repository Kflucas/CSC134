// Kelvin Flucas
// CSC134-0901
// M2T2
// 02/10/2025

#include <iostream>

using namespace std;

int main()
{

string name;
int num_apples;
double price_each;

cout << "What is your name?" << endl;
cin >> name;
cout << "Welcome to " << name << "'s apple farm!" << endl;
cout << "How many apples do you have?" << endl;
cin >> num_apples;
cout << "We have " << num_apples << " apples in stock" << endl;
cout << "How much does each apple cost?" << endl;
cin >> price_each;
cout << "Each apple costs $" << price_each << "." << endl;

double total_price = num_apples * price_each;

cout << "The total price for all " << num_apples;
cout << " apples is $" << total_price << "." << endl;
cout << "Thanks for coming by!" << endl;

return 0;
}