/*
 CSC 134
 M4T1 - While Loop Examples
 Hector Valdez Rodriguez
 October 26, 2026
*/

#include <iostream>
using namespace std;

int main()
{
    // Program 5-3: Display Hello five times using a while loop
    int count = 1;

    cout << "Program 5-3: Hello Loop" << endl;
    while (count <= 5)
    {
        cout << "Hello" << endl;
        count++;
    }

    cout << endl;

    // Program 5-6: Display numbers 1 through 10 and their squares
    int number = 1;

    cout << "Program 5-6: Squares Table" << endl;
    cout << "Number\tSquare" << endl;
    cout << "----------------" << endl;

    while (number <= 10)
    {
        cout << number << "\t" << number * number << endl;
        number++;
    }

    return 0;
}
