// CSC 134
// M5HW1 - Gold
// CorreaTJ
// 11/16/26


#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

// Function Prototypes
void question1();
void question2();
void question3();
void question4();
void question5();

// Input Validation Functions
double getDouble(string prompt, double minimum, bool allowEqual)
{
    double value;

    while (true)
    {
        cout << prompt;

        if (cin >> value)
        {
            if (allowEqual ? value >= minimum : value > minimum)
                return value;

            cout << "Invalid input. Please enter a valid value.\n";
        }
        else
        {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

int getInt(string prompt, int minimum, int maximum)
{
    int value;

    while (true)
    {
        cout << prompt;

        if (cin >> value)
        {
            if (value >= minimum && value <= maximum)
                return value;

            cout << "Invalid choice. Enter a number from "
                 << minimum << " to " << maximum << ".\n";
        }
        else
        {
            cout << "Invalid input. Please enter a whole number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

// QUESTION 1: Average Rainfall
void question1()
{
    string month1, month2, month3;
    double rain1, rain2, rain3, average;

    cout << "\n--- Average Rainfall ---\n";

    cout << "Enter month: ";
    cin >> month1;
    rain1 = getDouble("Enter rainfall for " + month1 + ": ", 0, true);

    cout << "Enter month: ";
    cin >> month2;
    rain2 = getDouble("Enter rainfall for " + month2 + ": ", 0, true);

    cout << "Enter month: ";
    cin >> month3;
    rain3 = getDouble("Enter rainfall for " + month3 + ": ", 0, true);

    average = (rain1 + rain2 + rain3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "\nThe average rainfall for " << month1 << ", "
         << month2 << ", and " << month3
         << " is " << average << " inches.\n";
}

// QUESTION 2: Block Volume
void question2()
{
    double width, length, height, volume;

    cout << "\n--- Block Volume ---\n";

    width = getDouble("Enter width: ", 0, false);
    length = getDouble("Enter length: ", 0, false);
    height = getDouble("Enter height: ", 0, false);

    volume = width * length * height;

    cout << fixed << setprecision(2);
    cout << "The volume of the block is " << volume << endl;
}

// QUESTION 3: Roman Numerals
void question3()
{
    string roman[] = {
        "I", "II", "III", "IV", "V",
        "VI", "VII", "VIII", "IX", "X"
    };

    cout << "\n--- Roman Numerals ---\n";

    int number = getInt("Enter a number (1 - 10): ", 1, 10);

    cout << "The Roman numeral version of "
         << number << " is " << roman[number - 1] << ".\n";
}

// QUESTION 4: Geometry Calculator
void question4()
{
    int choice;
    double radius, length, width, base, height, area;

    cout << "\n--- Geometry Calculator ---\n";

    do
    {
        cout << "\n1. Calculate the Area of a Circle\n";
        cout << "2. Calculate the Area of a Rectangle\n";
        cout << "3. Calculate the Area of a Triangle\n";
        cout << "4. Quit\n";

        choice = getInt("Enter your choice (1-4): ", 1, 4);

        switch (choice)
        {
            case 1:
                radius = getDouble("Enter the circle's radius: ", 0, true);
                area = 3.14159 * radius * radius;
                cout << "The area is " << area << endl;
                break;

            case 2:
                length = getDouble("Enter rectangle length: ", 0, true);
                width = getDouble("Enter rectangle width: ", 0, true);
                area = length * width;
                cout << "The area is " << area << endl;
                break;

            case 3:
                base = getDouble("Enter triangle base: ", 0, true);
                height = getDouble("Enter triangle height: ", 0, true);
                area = base * height * 0.5;
                cout << "The area is " << area << endl;
                break;

            case 4:
                cout << "Returning to main menu...\n";
                break;
        }

    } while (choice != 4);
}

// QUESTION 5: Distance Traveled
void question5()
{
    double speed, distance;
    int hours;

    cout << "\n--- Distance Traveled ---\n";

    speed = getDouble("What is the speed of the vehicle in mph? ", 0, true);
    hours = getInt("How many hours has it traveled? ", 1,
                   numeric_limits<int>::max());

    cout << "\nHour\tDistance Traveled\n";
    cout << "--------------------------------\n";

    for (int hour = 1; hour <= hours; hour++)
    {
        distance = speed * hour;

        cout << hour << "\t" << distance << endl;
    }
}

// QUESTION 6: Main Menu
int main()
{
    int choice;

    cout << fixed << setprecision(2);

    do
    {
        cout << "\n================================\n";
        cout << "     RICO'S SMART HUB TOOLS\n";
        cout << "================================\n";
        cout << "1. Average Rainfall\n";
        cout << "2. Block Volume\n";
        cout << "3. Roman Numerals\n";
        cout << "4. Geometry Calculator\n";
        cout << "5. Distance Traveled\n";
        cout << "6. Exit Program\n";
        cout << "================================\n";

        choice = getInt("Enter your choice (1-6): ", 1, 6);

        switch (choice)
        {
            case 1:
                question1();
                break;

            case 2:
                question2();
                break;

            case 3:
                question3();
                break;

            case 4:
                question4();
                break;

            case 5:
                question5();
                break;

            case 6:
                cout << "\nThank you for using the program. Goodbye!\n";
                break;
        }

    } while (choice != 6);

    return 0;
}
