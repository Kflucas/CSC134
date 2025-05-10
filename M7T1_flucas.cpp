#include <iostream>
using namespace std;

// CSC 134
// M7T1 - Restaurant Rating
// Kelvin Flucas
// 5/6/25
// Use Restaurant class to store user ratings


class Restaurant {
  private:
    string name;    // the name
    double rating;  // 0 to 5 stars

  public:
    
    Restaurant(string n, double r) {
        name = n;
        rating = r;
    }
    
    void setName(string n) {
        name = n; 
    }
    void setRating(double r) {
        rating = r;
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
    
    void printInfo() {
        cout << "Name: " << name << " ";
        cout << "(" << rating << "/5 stars)" << endl;
    }
};

int main() {
    cout << "M7T1 - Restaurant Reviews" << endl;

    
    Restaurant breakfast_place = Restaurant("Blue Moon Cafe", 4.9);
    Restaurant lunch_place = Restaurant("Denny's", 3.2);
    Restaurant dinner_place = Restaurant("Walk-On's", 4.8);

    cout << "Review info" << endl;

    cout << "Breakfast:" << endl;
    breakfast_place.printInfo();

    cout << "Lunch:" << endl;
    lunch_place.printInfo();

    cout << "Dinner:" << endl;
    dinner_place.printInfo();

    return 0;
}