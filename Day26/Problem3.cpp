// Write a program to Create ATM simulation
#include <iostream>
using namespace std;

int main()
{
    int pin = 3452, enteredPin;
    int choice, attempts = 3;
    long int balance = 100000, amount;

    cout << "=====> ATM SIMULATION <=====" << endl;
    cout << "Enter your PIN: ";
    while (1)
    {
        cin >> enteredPin;
        if (enteredPin == pin)
        {
            break;
        }
        attempts--;
        cout << "Attempts left :- " << attempts << endl;
        if (attempts == 0)
        {
            cout << "All attempts wasted !! Pls try again later " << endl;
            return 0;
        }
        cout << "Re-enter your PIN :- ";
    }
    do
    {
        cout << "=====> ATM MENU <=====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Current Balance: Rs." << balance << endl;
            break;
        case 2:
            cout << "Enter the amount to deposit: ";
            cin >> amount;

            balance += amount;
            cout << "Amount deposit successfully!" << endl;
            cout << "Updated Balnce: " << balance << endl;
            break;
        case 3:
            cout << "Enter the amount you want to withdraw: " << endl;
            cin >> amount;

            if (amount <= balance)
            {
                balance -= amount;

                cout << "Please collect your cash." << endl;
                cout << "Remaining balance: Rs. " << balance << endl;
            }
            else
            {
                cout << "Insufficient Balance!" << endl;
            }
            break;
        case 4:
            cout << "Thank you for using the ATM!" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
