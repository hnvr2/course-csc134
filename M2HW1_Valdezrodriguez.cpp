/*
CSC 134
M2HW1 - Gold
Hector Valdez Rodriguez
October 3, 2026
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // Question 1 - Banking Transaction Simulator

    string name;
    double startingBalance;
    double deposit;
    double withdrawal;
    double finalBalance;
    int accountNumber = 1342026;

    cout << "Question 1 - Banking Transaction Simulator" << endl;
    cout << "------------------------------------------" << endl;

    // INPUT
    cout << "Enter the name on the account: ";
    getline(cin, name);

    cout << "Enter starting account balance: $";
    cin >> startingBalance;

    cout << "Enter deposit amount: $";
    cin >> deposit;

    cout << "Enter withdrawal amount: $";
    cin >> withdrawal;

    // PROCESSING
    finalBalance = startingBalance + deposit - withdrawal;

    // OUTPUT
    cout << fixed << setprecision(2);

    cout << endl;
    cout << "Account Summary" << endl;
    cout << "Name: " << name << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Final Balance: $" << finalBalance << endl;

        // Question 2 - General Crates Inc.

    const double COST_PER_CUBIC_FOOT = 0.30;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    double length;
    double width;
    double height;
    double volume;
    double cost;
    double charge;
    double profit;

    cout << endl;
    cout << "Question 2 - General Crates Inc." << endl;
    cout << "--------------------------------" << endl;

    // INPUT
    cout << "Enter the dimensions of the crate (in feet):" << endl;

    cout << "Length: ";
    cin >> length;

    cout << "Width: ";
    cin >> width;

    cout << "Height: ";
    cin >> height;

    // PROCESSING
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // OUTPUT
    cout << fixed << setprecision(2);

    cout << endl;
    cout << "=========================================" << endl;
    cout << "The volume of the crate is " << volume << " cubic feet." << endl;
    cout << "Cost to build:       $" << cost << endl;
    cout << "Charge to customer:  $" << charge << endl;
    cout << "Profit:              $" << profit << endl;
    cout << "=========================================" << endl;

        // Question 3 - Pizza Party

    int pizzas;
    int slicesPerPizza;
    int visitors;
    int totalSlices;
    int slicesEaten;
    int leftoverSlices;

    cout << endl;
    cout << "Question 3 - Pizza Party" << endl;
    cout << "------------------------" << endl;

    // INPUT
    cout << "How many pizzas did you order? ";
    cin >> pizzas;

    cout << "How many slices are in each pizza? ";
    cin >> slicesPerPizza;

    cout << "How many visitors are coming? ";
    cin >> visitors;

    // PROCESSING
    totalSlices = pizzas * slicesPerPizza;
    slicesEaten = visitors * 3;
    leftoverSlices = totalSlices - slicesEaten;

        // OUTPUT
    cout << "Total pizza slices: " << totalSlices << endl;
    cout << "Slices needed for visitors: " << slicesEaten << endl;
    cout << "Leftover pizza slices: " << leftoverSlices << endl;

    // Question 4 - FTCC Cheering Program

    string letsGo = "Let's go ";
    string school = "FTCC";
    string team = "Trojans";
    string cheerOne;
    string cheerTwo;

    // PROCESSING - String Concatenation
    cheerOne = letsGo + school;
    cheerTwo = letsGo + team;

    // OUTPUT
    cout << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;

    return 0;
}