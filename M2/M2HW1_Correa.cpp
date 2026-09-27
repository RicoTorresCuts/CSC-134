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
    //question2();
    //question3();
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
    
    
}