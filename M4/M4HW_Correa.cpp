// CSC 134
// M4HW - Multiplication Tables
// CorreaTJ
// 10/13/26

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number from 1 to 12 (or 0 to quit): ";
    cin >> number;

    while (number >= 1 && number <= 12) {

        int multiplier = 1;

        while (multiplier <= 12) {
            cout << number << " times " << multiplier
                 << " is " << number * multiplier << endl;

            multiplier++;
        }

        cout << "\nEnter another number from 1 to 12 (or 0 to quit): ";
        cin >> number;
    }

    cout << "Invalid input or exit requested. Goodbye!" << endl;

    return 0;
}