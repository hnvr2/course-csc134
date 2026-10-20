/*
CSC 134
M3LAB2 - Number Grade to Letter Grade Conversion
October 20, 2026
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare variable to store the numerical grade
    int grade;

    // Ask the user to enter a numerical grade
    cout << "Enter your numerical grade: ";
    if (!(cin >> grade))
    {
        cout << "Invalid input. Enter a whole number from 0 to 100." << endl;
        return 1;
    }

    // Determine the letter grade using if-else statements
    if (grade >= 90 && grade <= 100)
    {
        cout << "Your letter grade is: A" << endl;
    }
    else if (grade >= 80 && grade <= 89)
    {
        cout << "Your letter grade is: B" << endl;
    }
    else if (grade >= 70 && grade <= 79)
    {
        cout << "Your letter grade is: C" << endl;
    }
    else if (grade >= 60 && grade <= 69)
    {
        cout << "Your letter grade is: D" << endl;
    }
    else if (grade >= 0 && grade <= 59)
    {
        cout << "Your letter grade is: F" << endl;
    }
    else
    {
        cout << "Invalid grade. Enter a number from 0 to 100." << endl;
    }

    return 0;
}
