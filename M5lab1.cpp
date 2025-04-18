// Kelvin Flucas
// CSC134-0901
// M5LAB1
// 04/16/2025

#include <iostream>

using namespace std;

void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_basement();
void choice_shed();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  main_menu();
  cout << "Thanks for playing!" << endl;
  return 0;
}

void main_menu() {
  cout << endl << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;

  if (choice == 1) {
    choice_front_door();
  } else if (choice == 2) {
    choice_back_door();
  } else if (choice == 3) {
    choice_go_home();
  } else if (choice == 4) {
    cout << "Ok, quitting game" << endl;
    return;
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.clear();
    cin.ignore(1000, '\n'); 
    main_menu();
  }
}

void choice_front_door() {
  cout << endl << "You try the front door." << endl;
  cout << "It's locked and you hear strange noises inside." << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (choice == 1) {
    choice_back_door();
  } else if (choice == 2) {
    choice_go_home();
  }
}

void choice_back_door() {
  cout << endl << "You sneak around back. The back door is slightly open!" << endl;
  cout << "Do you:" << endl;
  cout << "1. Enter the dark basement" << endl;
  cout << "2. Check the shed in the backyard" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (choice == 1) {
    choice_basement();
  } else if (choice == 2) {
    choice_shed();
  }
}

void choice_go_home() {
  cout << endl << "You decide it's not worth it and head home." << endl;
  cout << "You were not as curious as you thought and decide it's best to leave." << endl;
}

void choice_basement() {
  cout << endl << "You descend into the dark, musty basement..." << endl;
  cout << "Suddenly, the door slams shut behind you!" << endl;
  cout << "You hear footsteps above...." << endl;
}

void choice_shed() {
  cout << endl << "You quietly approach the shed in the backyard." << endl;
  cout << "The door creaks as you open it. Inside, you find old tools and a paper with read letters reading: please just leave..." << endl;
  cout << "yiu see a dusty map pinned to the wall!" << endl;
  cout << "Could this map lead to something important inside the house?" << endl;
}