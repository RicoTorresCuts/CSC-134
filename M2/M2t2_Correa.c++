// CSC 134
// M2T2 - Receipt
// CorreaTJ
// 9/14/26
// Build a receipt that looks like a receipt

#include <iostream> 
#include <string>
#include <iomanip>
// iomanip lets you 
using namespace std;

int main () {

  // DECLARE VARIABLES
  string meal_name;       // ex: "Arroz con Pollo"
  double meal_price;      // $
  double tax_rate;        // Percent
  double tax_amount;      // $
  double total;           // $, meal + tax

// INPUT
// Right now, nothing.  They pick exactly one plate.
// For now, hard code some values
meal_name   = "Arroz con Pollo"; // pick your own if you want
meal_price  = 5.99;
tax_rate    = 0.08; //8%

// PROCESSING
// Tax $ is the meal $ times the tax rate
tax_amount = meal_price * tax_rate;
total      = meal_price + tax_amount;

// OUTPUT
// TODO: Print like a receipt
// Receipt header
cout << setw(30) << "Welcome to Rico's Caribbean Cuisine" << endl;
cout << setw(30) << "FTCC Advanced Technology Bldg"  <<endl;
string line = "__________________________________________";
cout << line  << endl;
// Set width of columns and set 2 decimal places
// requires up top this line: #include <iomanip>
cout << setprecision(2) << fixed;
cout << setw(20) << meal_name << setw(10) << meal_price << endl;
cout << setw(20) << " tax: " << setw(10) << tax_amount << endl;
cout << line << endl;
cout << setw(20) << "Total: " << setw(10)<< total << endl;
cout << setw(30) << "Thank You Come Again" << endl << endl;
return 0; // no errrors
}
