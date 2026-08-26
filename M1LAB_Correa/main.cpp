// CSC 134
// M1LAB - apple sales
// CorreaTJ
// 8/26/26
//Calculate apple prices.

#include <iostream>
using namespace std;

int main()
{
    // Introduce yourself
    string name = "Correa";
    string product = "cuts";

    cout << "Welcome to the " <<name << " ";
    cout << product << " shop." << endl;

    // Do product price calculations
    int product_count = 100;
    double product_price = 30.00;  //in USD

    cout << "We have " << product_count << " ";
    cout << product << " (s). They are $" << product_price;
    cout << " each." << endl;

    double total_price = product_count * product_price;
    cout << "Total price for all " << product_count;
    cout << " is: $" << total_price << endl;

    return 0;
}
