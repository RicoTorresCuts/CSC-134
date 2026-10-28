// CSC 134
// M5LAB2 - Complete a Program
// CorreaTJ
// 10/28/26

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    // This program calculates the area of a rectangle.

    double length,    // The rectangle's length
           width,     // The rectangle's width
           area;      // The rectangle's area

    // Get the rectangle's length.
    length = getLength();

    // Get the rectangle's width.
    width = getWidth();

    // Get the rectangle's area.
    area = getArea(length, width);

    // Display the rectangle's data.
    displayData(length, width, area);

    return 0;
}

//***************************************************
// The getLength function asks for the length.       *
//***************************************************
double getLength()
{
    double length;

    cout << "Enter the rectangle's length: ";
    cin >> length;

    return length;
}

//***************************************************
// The getWidth function asks for the width.         *
//***************************************************
double getWidth()
{
    double width;

    cout << "Enter the rectangle's width: ";
    cin >> width;

    return width;
}

//***************************************************
// The getArea function calculates the area.         *
//***************************************************
double getArea(double length, double width)
{
    return length * width;
}

//***************************************************
// The displayData function displays the results.    *
//***************************************************
void displayData(double length, double width, double area)
{
    cout << fixed << setprecision(2);

    cout << "\nRectangle Information\n";
    cout << "---------------------\n";
    cout << "Length: " << length << endl;
    cout << "Width:  " << width << endl;
    cout << "Area:   " << area << endl;
}

