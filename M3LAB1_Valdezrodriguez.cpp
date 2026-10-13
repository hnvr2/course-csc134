
#include <iostream>
using namespace std;

// Function declarations
void chaseRobber();
void helpPartner();
void callBackup();

int main()
{

    // Declare the player's choice
    int choice;

    // Display the game introduction
    cout << "Cops and Robbers: A Tough Decision" << endl;
    cout << "---------------------------------" << endl;
    cout << "You and your partner are chasing a bank robber." << endl;
    cout << "During the chase, your partner falls and is injured." << endl;
    cout << "The robber continues running away." << endl;
    cout << "You only have seconds to decide!" << endl;

    // Display the three choices
    cout << "\nWhat will you do?" << endl;
    cout << "1. Chase the robber" << endl;
    cout << "2. Help your fallen partner" << endl;
    cout << "3. Call for backup" << endl;

    // Get the player's decision
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    // Determine which action the player chooses
    if (choice == 1)
    {
        chaseRobber();
    }
    else if (choice == 2)
    {
        helpPartner();
    }
    else if (choice == 3)
    {
        callBackup();
    }
    else
    {
        cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
    }

    return 0;
}
 // Function definitions

 void chaseRobber()
 {
     cout << "\nYou decide to chase the robber!" << endl;
     cout << "After a long chase, you catch the suspect." << endl;
     cout << "However, your partner's injuries become worse." << endl;
     cout << "You stopped the criminal, but at what cost?" << endl;
 }


void helpPartner()
{
    cout << "\nYou decide to help your partner!" << endl;
    cout << "You call for medical assistance and provide first aid." << endl;
    cout << "Your partner receives medical attention." << endl;
    cout << "However, the robber escapes with the money." << endl;
    cout << "You saved your partner, but the criminal is free." << endl;
}

void callBackup()
{
    cout << "\nYou decide to call for backup!" << endl;
    cout << "You request additional officers and medical assistance." << endl;
    cout << "Backup arrives, but the robber has escaped." << endl;
    cout << "Your partner is taken to the hospital." << endl;
    cout << "You followed procedure, but the suspect is still free." << endl;
}
