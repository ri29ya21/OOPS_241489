// Program 12: WAP to develop a Currency Converter
// using Menu-Driven Approach.
// Author – Riya -241489

#include <iostream>
using namespace std;

int main()
{
    int choice;
    float amount;

    do
    {
        cout << "\n===== CURRENCY CONVERTER MENU =====" << endl;

        cout << "1. INR to USD" << endl;
        cout << "2. USD to INR" << endl;
        cout << "3. INR to EUR" << endl;
        cout << "4. EUR to INR" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter amount in INR: ";
                cin >> amount;

                cout << "USD: " << amount / 83.0 << endl;
                break;

            case 2:
                cout << "Enter amount in USD: ";
                cin >> amount;

                cout << "INR: " << amount * 83.0 << endl;
                break;

            case 3:
                cout << "Enter amount in INR: ";
                cin >> amount;

                cout << "EUR: " << amount / 90.0 << endl;
                break;

            case 4:
                cout << "Enter amount in EUR: ";
                cin >> amount;

                cout << "INR: " << amount * 90.0 << endl;
                break;

            case 5:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}