
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    // Declare dice variables
    int die1, die2, total;

    // Seed the random number generator
    srand(time(0));

    // Roll two 16-sided dice
    die1 = rand() % 16 + 1;
    die2 = rand() % 16 + 1;

    // Calculate the total of both dice
    total = die1 + die2;

  
    // Display the dice results
    cout << "Welcome to the D16 Fitness Challenge!" << endl;
    cout << "Die 1 rolled: " << die1 << endl;
    cout << "Die 2 rolled: " << die2 << endl;
    cout << "Total roll: " << total << endl;

    // Determine the outcome of the roll
    if (total < 8)
    {
        cout << "You must do 24 push-ups!" << endl;
    }
    else if (total < 24)
    {
        cout << "No penalty! Your opponent rolls next." << endl;
    }
    else
    {
        cout << "Your opponent must do 32 push-ups!" << endl;
    }

    return 0;
}
