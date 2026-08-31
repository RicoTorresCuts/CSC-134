// CSC 134
/*
M1HW1 - Movie Talk
Correa, J
3/31/26
Example: Talk about Showgirls
*/

#include <iostream>
using namespace std;

//Starting point
int main () {

    //Purpose: Practice using string, int, and double within natural text.
    // Declare variables
    string movie_name = "Showgirls";
    int movie_year = 1995;
    double movie_grossm = 37.8; 

    // Print the movie blurb
    cout << "The movie " << movie_name << " came out in " << movie_year << "." << endl;

    cout << "It grossed in total $" << movie_grossm << " million." << endl;

    // Print movie quote
    cout << "QUOTE:" << endl << " \t\"There's always someone younger and hungrier coming down the stairs after you.\" "  << endl;

    return 0; // no errors
}


