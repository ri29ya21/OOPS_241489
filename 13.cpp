// Program 13: WAP to design a Bank Management System
// using OOP Concepts.
// Author – Riya -241489

#include <iostream>
using namespace std;

class BankAccount
{
private:
    string name;
    int accNo;
    float balance;

public:

    // Constructor
    BankAccount(string n, int a, float b)
    {
        name = n;
        accNo = a;
        balance = b;
    }

    // Function to Deposit Money
    void deposit(float amount)
    {
        balance += amount;

        cout << "Amount Deposited Successfully" << endl;
    }

    // Function to Withdraw Money
    void withdraw(float amount)
    {
        if(amount > balance)
        {
            cout << "Insufficient Balance" << endl;
        }
        else
        {
            balance -= amount;

            cout << "Amount Withdrawn Successfully" << endl;
        }
    }

    // Function to Display Account Details
    void display()
    {
        cout << "\n----- Account Details -----" << endl;

        cout << "Name: " << name << endl;
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

// ----------- Main Function -----------

int main()
{
    string name;
    int accNo;
    float balance;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    // Creating Object
    BankAccount acc(name, accNo, balance);

    int choice;
    float amount;

    do
    {
        cout << "\n===== BANK MENU =====" << endl;

        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display Account" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;

                acc.deposit(amount);
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                acc.withdraw(amount);
                break;

            case 3:
                acc.display();
                break;

            case 4:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}