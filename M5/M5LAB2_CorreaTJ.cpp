// CSC 134
// M5LAB2 - Complete a Program
// Rectangle Calculations
// CorreaTJ
// 10/28/26


#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
double getPerimeter(double length, double width);
void displayData(double length, double width, double area);
bool getAnotherRectangle();

//***************************************************
// Main function
//***************************************************
int main()
{
    char again = 'y';

    cout << "====================================\n";
    cout << "   RECTANGLE AREA CALCULATOR\n";
    cout << "====================================\n";

    cout << fixed << setprecision(2);

    while (again == 'y' || again == 'Y')
    {
        double length, width, area, perimeter;

        // Get the rectangle's length.
        length = getLength();

        // Get the rectangle's width.
        width = getWidth();

        // Calculate the area.
        area = getArea(length, width);

        // Calculate the perimeter.
        perimeter = getPerimeter(length, width);

        // Display the rectangle's information.
        displayData(length, width, area);

        cout << "Perimeter: " << perimeter << endl;

        // Ask whether to calculate another rectangle.
        if (getAnotherRectangle())
        {
            again = 'y';
            cout << endl;
        }
        else
        {
            again = 'n';
        }
    }

    cout << "\nThank you for using the Rectangle Calculator!\n";

    return 0;
}

//***************************************************
// Get the rectangle's length.
//***************************************************
double getLength()
{
    double length;

    cout << "Enter the rectangle's length: ";
    cin >> length;

    while (cin.fail() || length <= 0)
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Invalid input. Length must be a positive number.\n";
        cout << "Enter the rectangle's length: ";
        cin >> length;
    }

    return length;
}

//***************************************************
// Get the rectangle's width.
//***************************************************
double getWidth()
{
    double width;

    cout << "Enter the rectangle's width: ";
    cin >> width;

    while (cin.fail() || width <= 0)
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Invalid input. Width must be a positive number.\n";
        cout << "Enter the rectangle's width: ";
        cin >> width;
    }

    return width;
}

//***************************************************
// Calculate and return the rectangle's area.
//***************************************************
double getArea(double length, double width)
{
    return length * width;
}

//***************************************************
// Calculate and return the rectangle's perimeter.
//***************************************************
double getPerimeter(double length, double width)
{
    return 2 * (length + width);
}

//***************************************************
// Display the rectangle's information.
//***************************************************
void displayData(double length, double width, double area)
{
    cout << "\n---------- Rectangle Results ----------\n";
    cout << "Length: " << length << endl;
    cout << "Width:  " << width << endl;
    cout << "Area:   " << area << endl;
}

//***************************************************
// Ask whether the user wants another calculation.
//***************************************************
bool getAnotherRectangle()
{
    char choice;

    cout << "\nWould you like to calculate another rectangle? (Y/N): ";
    cin >> choice;

    while (choice != 'y' && choice != 'Y' &&
           choice != 'n' && choice != 'N')
    {
        cout << "Please enter Y or N: ";
        cin >> choice;
    }

    return choice == 'y' || choice == 'Y';
}


