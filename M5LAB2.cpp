// Kelvin Flucas
// CSC134-0901
// M5LAB2
// 04/16/2025

#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
  
    double length,    
           width,     
           area;     
   
    length = getLength();
   
   
    width = getWidth();
   
 
    area = getArea(length, width);
   
 
    displayData(length, width, area);
          
    return 0;
}

double getLength() {
    double length;
    cout << "Enter the rectangle's length: ";
    cin >> length;
    return length;
}

double getWidth() {
    double width;
    cout << "Enter the rectangle's width: ";
    cin >> width;
    return width;
}


double getArea(double length, double width) {
    return length * width;
}


void displayData(double length, double width, double area) {
    cout << endl;
    cout << "Rectangle Dimensions & Area:" << endl;
    cout << "----------------------------" << endl;
    cout << "Length: " << length << endl;
    cout << "Width : " << width << endl;
    cout << "Area  : " << area << endl;
}