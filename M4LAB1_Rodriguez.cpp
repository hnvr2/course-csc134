/*
 CSC 134
 M4LAB1 - Nested Loops
 Hector Valdez Rodriguez
 October 26, 2026
*/

#include <iostream>
using namespace std;

int main()
{
    int height;
    int width;

    // Ask the user for the rectangle dimensions
    cout << "Welcome to the Asterisk Rectangle Program!" << endl;
    cout << "Enter the height: ";
    cin >> height;

    cout << "Enter the width: ";
    cin >> width;

    // Check for valid dimensions
    if (height <= 0 || width <= 0)
    {
        cout << "Please enter positive numbers." << endl;
        return 1;
    }

    // Outer loop controls the rows
    for (int i = 0; i < height; i++)
    {
        // Inner loop controls the columns
        for (int j = 0; j < width; j++)
        {
            cout << "* ";
        }

        // Move to the next row
        cout << endl;
    }

    return 0;
}
