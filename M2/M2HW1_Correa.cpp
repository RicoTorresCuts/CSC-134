/* 
CSC 134
M2HW1 - Gold
CorreaTJ
9/27/26
HOW TO USE:
- Fill in the functions for any question you answer
- uncomment those functions in main, so they run.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// COVERED in module 5, here's the basics
// List extra functions above main
// Write the full version below main 
void question1();
void question2();
void question3();
void question4();



int main() {
    // Run only the questions you finish by removing the //
    question1();
    question2();
    question3();
    //question4();
}

void question1() {
    cout << "\n========== Question 1 ==========\n";

    string name;
    double startingBalance;
    double deposit;
    double withdrawal;
    double finalBalance;
    int accountNumber = 123456;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your starting account balance: $";
    cin >> startingBalance;

    cout << "Enter the amount of your deposit: $";
    cin >> deposit;

    cout << "Enter the amount of your withdrawal: $";
    cin >> withdrawal;

    finalBalance = startingBalance + deposit - withdrawal;

    cout << fixed << setprecision(2);

    cout << "\nAccount Information\n";
    cout << "Name on account: " << name << endl;
    cout << "Account number: " << accountNumber << endl;
    cout << "Final account balance: $" << finalBalance << endl;

}

void question2() {
    cout << "\n========== Question 2 ==========\n";

    // Declare constants and variables
    const double COST_PER_CUBIC_FOOT = 0.30;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    // Variables describing the crate
    double length, width, height;
    double volume;
    double crate_cost;
    double crate_charge;
    double profit;

    // Get the dimensions of the crate
    cout << "Please enter the crate dimensions." << endl;

    cout << "Crate length: ";
    cin >> length;

    cout << "Crate width: ";
    cin >> width;

    cout << "Crate height: ";
    cin >> height;

    // Calculate the volume
    volume = length * width * height;

    // Calculate price and cost
    crate_cost = COST_PER_CUBIC_FOOT * volume;
    crate_charge = CHARGE_PER_CUBIC_FOOT * volume;

    // Calculate profit
    profit = crate_charge - crate_cost;

    // Display results to user
    cout << setprecision(2) << fixed;
    cout << "A crate measuring " << length << " x " << width
    << " x " << height << " ft. " << endl;
    cout << "Is volume: " << volume << " cubic ft." << endl;

    cout << endl;

    cout << "Cost to build: $" << crate_cost << endl;
    cout << "Sells for:     $" << crate_charge << endl;
    cout << "Profit:        $" << profit << endl;
    
}

void question3() {
    cout << "\n========== Question 3 ==========\n";

    int pizzas;
    int slicesPerPizza;
    int visitors;
    int totalSlices;
    int slicesLeft;

    cout << "How many pizzas did you order? ";
    cin >> pizzas;

    cout << "How many slices are in each pizza? ";
    cin >> slicesPerPizza;

    cout << "How many visitors are coming? ";
    cin >> visitors;

    totalSlices = pizzas * slicesPerPizza;

    slicesLeft = totalSlices - (visitors * 3);

    cout << "\nPizza party results" << endl;
    cout << "Total slices: " << totalSlices << endl;
    cout << "Slices left over: " << slicesLeft << endl;
}