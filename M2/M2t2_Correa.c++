// CSC 134
//





#include <iostream> 
using namespace std;

int main () {

  // DECLARE VARIABLES
  string meal_name;       // ex: "Chicken Sandwich"
  double meal price;      // $
  double tax_rate;        // Percent
  double tax_amount;      // $
  double total;           // $, meal + tax

// INPUT
// Right now, nothing.  They pick exactly one sandwich.
// For now, hard code some values
meal_name   = "Chicken Sandwich"; // pick your own if you want
meal_price  = 5.99;
tax_rate    = 0.08; //8%

// PROCESSING
// Tax $ is the meal $ times the tax rate
tax_amount = meal_price * tax_rate;
total      = meal_price + tax_amount;

// OUTPUT
TODO: Print like a receipt
string line = "__________________________________________";
cout << line  << endl;
cout << meal_name << " " << meal_price << endl;
cout << " tax: " << " " << tax_amount << endl;
cout << line << endl;
cout << "Total: " << total << endl;
cout << "Thank You Come Again" << endl << endl;
return 0; // no errrors
}
