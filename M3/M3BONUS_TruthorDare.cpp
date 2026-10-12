// CSC 134
// M3BONUS - Truth or Dare
// CorreaTJ
// 10/12/26

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototypes
void truth();
void dare();
void wildCard(bool &loseNextTurn);
void playGame(bool &loseNextTurn);

// Main function
int main() {
    int choice;
    bool keepGoing = true;
    bool loseNextTurn = false;

    // Start the random number generator
    srand(time(0));

    while (keepGoing == true) {
        cout << "\n============================" << endl;
        cout << " TRUTH OR DARE: WILD CARD!" << endl;
        cout << "============================" << endl;
        cout << "1. Play a Random Round" << endl;
        cout << "2. Truth Only" << endl;
        cout << "3. Dare Only" << endl;
        cout << "0. Exit Game" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            playGame(loseNextTurn);
        }
        else if (choice == 2) {
            if (loseNextTurn == true) {
                cout << "\nYou lost your turn! Try again next round."
                     << endl;
                loseNextTurn = false;
            }
            else {
                truth();
            }
        }
        else if (choice == 3) {
            if (loseNextTurn == true) {
                cout << "\nYou lost your turn! Try again next round."
                     << endl;
                loseNextTurn = false;
            }
            else {
                dare();
            }
        }
        else if (choice == 0) {
            cout << "\nThanks for playing!" << endl;
            keepGoing = false;
        }
        else {
            cout << "Not a valid choice. Please try again." << endl;
        }
    }

    return 0;
}

// Play a random round
void playGame(bool &loseNextTurn) {
    if (loseNextTurn == true) {
        cout << "\nYou lost your turn! No challenge this round."
             << endl;
        loseNextTurn = false;
        return;
    }

    int roll = rand() % 5 + 1;

    if (roll == 1) {
        wildCard(loseNextTurn);
    }
    else if (roll == 2 || roll == 3) {
        truth();
    }
    else {
        dare();
    }
}

// Display a random truth question
void truth() {
    int number = rand() % 5 + 1;

    cout << "\n--- TRUTH ---" << endl;

    if (number == 1) {
        cout << "What is your biggest fear?" << endl;
    }
    else if (number == 2) {
        cout << "What is your most embarrassing moment?" << endl;
    }
    else if (number == 3) {
        cout << "What is one secret talent you have?" << endl;
    }
    else if (number == 4) {
        cout << "Who was your first crush?" << endl;
    }
    else {
        cout << "What is something you have never told anyone?"
             << endl;
    }
}

// Display a random dare
void dare() {
    int number = rand() % 5 + 1;

    cout << "\n--- DARE ---" << endl;

    if (number == 1) {
        cout << "Dance for 15 seconds!" << endl;
    }
    else if (number == 2) {
        cout << "Sing your favorite song for 10 seconds!" << endl;
    }
    else if (number == 3) {
        cout << "Do 5 jumping jacks!" << endl;
    }
    else if (number == 4) {
        cout << "Talk in a funny voice until your next turn!"
             << endl;
    }
    else {
        cout << "Strike your best celebrity pose!" << endl;
    }
}

// Handle the Wild Card
void wildCard(bool &loseNextTurn) {
    int choice;

    cout << "\n*** WILD CARD! ***" << endl;
    cout << "1. GO AGAIN!" << endl;
    cout << "2. LOSE A TURN" << endl;
    cout << "Choose your fate: ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nYou chose GO AGAIN!" << endl;

        int next = rand() % 2 + 1;

        if (next == 1) {
            truth();
        }
        else {
            dare();
        }
    }
    else if (choice == 2) {
        cout << "\nYour next round is forfeited!" << endl;
        loseNextTurn = true;
    }
    else {
        cout << "Invalid choice. You keep your Wild Card."
             << endl;
    }
}
