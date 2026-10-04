// CSC 134
// M3t2 Random Numbers - Roll the Dice
// CorreaTJ
// 10/04/26


#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time-based seed

using namespace std;

int main() {
    cout << "Let's roll some dice!" << endl;

    int seed = time(0);
    srand(seed);

    const int MAX = 6; // numbers from 1 through 6
    int roll1, roll2, total;

    roll1 = (rand() % MAX) + 1;
    cout << "Your roll was: " << roll1 << endl;

    roll2 = (rand() % MAX) + 1;
    cout << "Your roll was: " << roll2 << endl;

    total = roll1 + roll2;
    cout << "Your total roll is: " << total << endl;

    // Check for an immediate win or loss on the first roll.
    if (total == 7) {
        cout << "Lucky seven! You Win!" << endl;
    }
    else if (total == 11) {
        cout << "You're in Luck! Eleven is a winner!" << endl;
    }
    else if (total == 2) {
        cout << "Snake eyes! Too bad, you lose." << endl;
    }
    else if (total == 3) {
        cout << "Sorry, three is unlucky, you lose." << endl;
    }
    else if (total == 12) {
        cout << "Boxcars! Sorry, you lost." << endl;
    }
    else {
        cout << "You got a " << total
             << " Gotta try a little harder!" << endl;
    }

    return 0;
}