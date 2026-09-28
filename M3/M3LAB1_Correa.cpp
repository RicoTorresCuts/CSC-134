// CSC 134
// M3LAB1 - Menus and Choices
// Julio Correa-Torres
// 9/28/26

#include <iostream>
using namespace std;

void chooseDoor1();
void chooseDoor2();
void chooseDoor3();

int main() {
  int choice; // menu choice

  // Display the menu
  cout << "Do you choose Door 1, Door 2, or Door 3?" << endl;
  cout << "1. Choose Door #1" << endl;
  cout << "2. Choose Door #2" << endl;
  cout << "3. Choose Door #3" << endl;
  cout << "? "; // the prompt
  cin >> choice;

  // Branching: test the user's choice
  if (1 == choice) {
    chooseDoor1();
  }
  else if (2 == choice) {
    chooseDoor2();
  }
  else if (3 == choice) {
    chooseDoor3();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0; 

} 

void chooseDoor1() {
  cout << "You chose: Choose Door #1" << endl;
  cout << "CONGRATULATIONS!  You just won a NEW CAR!" << endl;
}

void chooseDoor2() {
  cout << "You chose: Choose Door #2" << endl;
  cout << "WINNER! ... a PAID vacation to anywhere in the US!" << endl;
}

void chooseDoor3() {
  cout << "You chose: Choose Door #3" << endl;
  cout << " Thanks for being a faithful client.  You've won FREE Haircuts for 6 months" << endl;
}
