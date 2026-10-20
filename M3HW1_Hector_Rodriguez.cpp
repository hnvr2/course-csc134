/*
 CSC 134
 M3HW1 - Gold
 Hector Valdez Rodriguez
 October 20, 2026

 Question 1 - Captain Jack Sparrow Chatbot
 Question 2 - Pizza Restaurant Receipt Calculator
 Question 3 - Captain Jack Sparrow and the Crown of England
 Question 4 - Captain Jack's Treasure Math
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // Question 1 - Chatbot
    string response;
    cout << "QUESTION 1 - CAPTAIN JACK SPARROW CHATBOT" << endl;
    cout << "Ahoy, matey!" << endl;
    cout << "I am Captain Jack Sparrow, savvy?" << endl;
    cout << "Have you seen my ship, the Black Pearl?" << endl;
    cout << "Please type yes or no: ";
    cin >> response;

    if (response == "yes")
    {
        cout << "Excellent! Now, where have you hidden my rum?" << endl;
    }
    else if (response == "no")
    {
        cout << "Not all treasure is silver and gold, mate." << endl;
        cout << "Help me find my ship!" << endl;
    }
    else
    {
        cout << "Why is the rum always gone?" << endl;
        cout << "You're not making any sense!" << endl;
    }

    // Question 2 - Receipt Calculator (based on Hector's M2T2)
    cout << "\nQUESTION 2 - HECTOR'S PIZZA RESTAURANT" << endl;
    string item = "pizza";
    double item_price;
    const double tax_percent = 0.08;
    const double tip_percent = 0.15;
    double tax_amount;
    double tip_amount = 0.0;
    double total;
    int order_type;

    cout << "Welcome to Hector's Pizza Restaurant!" << endl;
    cout << "You ordered one " << item << "." << endl;
    cout << "Enter the price of your meal: $";
    cin >> item_price;
    if (!cin || item_price < 0)
    {
        cout << "Invalid meal price." << endl;
        return 1;
    }

    cout << "Enter 1 for dine in or 2 for takeaway: ";
    cin >> order_type;
    if (!cin || (order_type != 1 && order_type != 2))
    {
        cout << "Invalid order type!" << endl;
        return 1;
    }

    tax_amount = item_price * tax_percent;
    if (order_type == 1)
    {
        tip_amount = item_price * tip_percent;
    }
    else
    {
        tip_amount = 0.0;
    }
    total = item_price + tax_amount + tip_amount;

    cout << setprecision(2) << fixed;
    cout << "\nThank you for shopping with us!" << endl;
    cout << "------------------------------" << endl;
    cout << item << "\t\t$" << item_price << endl;
    cout << "Tax\t\t$" << tax_amount << endl;
    cout << "Tip\t\t$" << tip_amount << endl;
    cout << "------------------------------" << endl;
    cout << "Total Due:\t$" << total << endl;

    // Question 3 - Choose Your Own Adventure
    cout << "\nQUESTION 3 - CAPTAIN JACK AND THE CROWN OF ENGLAND" << endl;
    int choice1;
    int choice2;
    cout << "Captain Jack Sparrow has entered Buckingham Palace!" << endl;
    cout << "His mission is to steal the King's crown!" << endl;
    cout << "Jack discovers two ways into the King's chamber." << endl;
    cout << "1. Walk up the main staircase." << endl;
    cout << "2. Sneak through a secret passage." << endl;
    cin >> choice1;

    if (choice1 == 1)
    {
        cout << "The Royal Guards spot Jack!" << endl;
        cout << "He is captured and thrown into the dungeon!" << endl;
        cout << "GAME OVER!" << endl;
    }
    else if (choice1 == 2)
    {
        cout << "Jack sneaks through the secret passage!" << endl;
        cout << "He finds the King's crown sitting on a pillow!" << endl;
        cout << "1. Grab the crown and run!" << endl;
        cout << "2. Replace the crown with a fake one." << endl;
        cin >> choice2;

        if (choice2 == 1)
        {
            cout << "Jack grabs the crown!" << endl;
            cout << "A hidden alarm wakes the Royal Guards!" << endl;
            cout << "Jack is captured! DEFEAT!" << endl;
        }
        else if (choice2 == 2)
        {
            cout << "Jack carefully swaps the crowns!" << endl;
            cout << "The Royal Guards notice nothing!" << endl;
            cout << "Jack escapes to the Black Pearl!" << endl;
            cout << "The King's crown is now his treasure!" << endl;
            cout << "VICTORY! SAVVY?" << endl;
        }
        else
        {
            cout << "Invalid choice. Game Over!" << endl;
        }
    }
    else
    {
        cout << "Invalid choice. Game Over!" << endl;
    }

    // Question 4 - Math Practice
    cout << "\nQUESTION 4 - CAPTAIN JACK'S TREASURE MATH" << endl;
    int gold1;
    int gold2;
    int userAnswer;
    int correctAnswer;
    srand(time(0));
    gold1 = rand() % 10;
    gold2 = rand() % 10;
    correctAnswer = gold1 + gold2;

    cout << "Welcome aboard the Black Pearl!" << endl;
    cout << "Captain Jack needs help counting gold!" << endl;
    cout << "What is " << gold1 << " plus " << gold2 << "?" << endl;
    cin >> userAnswer;
    if (!cin)
    {
        cout << "Invalid math answer." << endl;
        return 1;
    }
    if (userAnswer == correctAnswer)
    {
        cout << "Correct! You've earned your share of the treasure!" << endl;
    }
    else
    {
        cout << "Wrong answer, matey!" << endl;
        cout << "The correct answer is " << correctAnswer << endl;
    }

    cout << "\nThank you for playing!" << endl;
    return 0;
}
