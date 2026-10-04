// CSC 134
// M3HW - Gold
// CorreaTJ
// 9/30/26

// Completing 4 questions to get Gold 

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void question1();
void question2();
void question3();
void question4();

int main() {
    // Run only the questions you finish by removing the //
    question1();
    // question2();
    // question3();
    // question4();
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


    