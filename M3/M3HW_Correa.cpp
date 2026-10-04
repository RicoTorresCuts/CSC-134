// CSC 134
// M3HW - Gold
// CorreaTJ
// 10/4/26

// Completing 4 questions to get Gold 

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
using namespace std;

void question1();
void question2();
void question3();
void question4();

int main() {
    int choice;
    bool keep_going = true;

    // Seed the random number generator once before using rand().
    srand(time(0));

    while (true == keep_going) {
        cout << "\nCSC 134 - M3HW Gold" << endl;
        cout << "1. Chat bot" << endl;
        cout << "2. Receipt calculator" << endl;
        cout << "3. Choose Your Own Adventure" << endl;
        cout << "4. Math practice" << endl;
        cout << "0. Exit" << endl;
        cout << "Choose a question: ";

        cin >> choice;

        if (1 == choice) {
            question1();
        }
        else if (2 == choice) {
            question2();
        }
        else if (3 == choice) {
            question3();
        }
        else if (4 == choice) {
            question4();
        }
        else if (0 == choice) {
            cout << "Bye!" << endl;
            keep_going = false;
        }
        else {
            cout << "Not a valid choice." << endl;
        }
    }

    return 0;
}

void question1() {
    cout << "\n========== Question 1 ==========\n";
    cout << "Hello, I'm your NEW Best Friend!" << endl;
    cout << "Do you want to be my friend? Please type yes or no." << endl;

    string answer;
    cin >> answer;

    if (answer == "yes") {
        cout << "That's great! I'm sure we'll get along." << endl;
    }
    else if (answer == "no") {
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
    else {
        cout << "If you're not sure... that's OK. I promise we'll be Best Buddies" << endl;
    }
}

void question2() {
    cout << "\n========== Question 2 ==========\n";

    double meal_price;
    double tax_rate = 0.08;
    double tax_amount;
    double tip_amount = 0.00;
    double total;
    int order_type;

    cout << "Enter the price of the meal: $";
    cin >> meal_price;

    cout << "Enter 1 for dine in or 2 for takeaway: ";
    cin >> order_type;

    if (order_type == 1) {
        tip_amount = meal_price * 0.15;
    }
    else if (order_type == 2) {
        tip_amount = 0.00;
    }
    else {
        cout << "That is not a valid order type." << endl;
        return;
    }

    tax_amount = meal_price * tax_rate;
    total = meal_price + tax_amount + tip_amount;

    string line = "__________________________________________";

    cout << "\n" << setw(30) << "  Welcome to Rico's Caribbean Cuisine" << endl;
    cout << setw(30) << "512 S. Reilly Rd." << endl;
    cout << line << endl;

    cout << fixed << setprecision(2);
    cout << setw(20) << "Meal" << setw(10) << meal_price << endl;
    cout << setw(20) << "Tax:" << setw(10) << tax_amount << endl;
    cout << setw(20) << "Tip:" << setw(10) << tip_amount << endl;
    cout << line << endl;
    cout << setw(20) << "Total:" << setw(10) << total << endl;
    cout << setw(30) << "Thank You Come Again!" << endl;
}
    
void question3() {
    cout << "\n========== Question 3 ==========\n";
    cout << "You are exploring an old castle and find two paths." << endl;
    cout << "1. Enter the dark tunnel" << endl;
    cout << "2. Cross the rope bridge" << endl;
    cout << "Choose 1 or 2: ";

    int first_choice;
    cin >> first_choice;

    if (first_choice == 1) {
        cout << "The tunnel collapses behind you. Game over!" << endl;
    }
    else if (first_choice == 2) {
        cout << "You cross the bridge and find a locked treasure room." << endl;
        cout << "1. Force the door open" << endl;
        cout << "2. Use the key you found on the bridge" << endl;
        cout << "Choose 1 or 2: ";

        int second_choice;
        cin >> second_choice;

        if (second_choice == 1) {
            cout << "The door was trapped. You are defeated!" << endl;
        }
        else if (second_choice == 2) {
            cout << "The key opens the room. You find the treasure. Victory!" << endl;
        }
        else {
            cout << "That is not a valid choice." << endl;
        }
    }
    else {
        cout << "That is not a valid choice." << endl;
    }
}

void question4() {
    cout << "\n========== Question 4 ==========" << endl;

    int number1 = (rand() % 10);
    int number2 = (rand() % 10);
    int correct_answer = number1 + number2;
    int user_answer;

    cout << "What is " << number1 << " plus " << number2 << "?" << endl;
    cin >> user_answer;

    if (user_answer == correct_answer) {
        cout << "Correct!" << endl;
    }
    else {
        cout << "Incorrect." << endl;
    }
}