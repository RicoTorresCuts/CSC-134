// CSC 134
// M5T2_BOT collab
// CorreaTJ
// 10/21/26

#include <iostream>
using namespace std;

// Prototypes: Declare functions here, define undey main.
int square(int num);
void printAnswerLine(int number, int squared);

int main() {
    cout << "Table of Squares Program" << endl;
    for (int i = 1; i <= 10; i++) {
        int sq = square(i);
        printAnswerLine(i, sq);

    }
    return 0;
}    

// Define functions here.
int square(int number) {
    return number * number; 
    }

void printAnswerLine(int number, int squared) {
    cout << number << " squared is " << squared << endl;

    }
