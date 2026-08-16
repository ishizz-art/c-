#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    float balance;

public:
    // Function to take account details
    void input()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cin.ignore();
        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolderName);

        cout << "Enter Balance: ";
        cin >> balance;
    }

    // Function to perform deposit or withdrawal
    void operation()
    {
        int choice;
        float amount;

        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\nEnter your choice: ";
        cin >> choice;

        cout << "Enter amount: ";
        cin >> amount;

        if (choice == 1)
        {
            balance = balance + amount;
            cout << "Amount deposited successfully." << endl;
        }
        else if (choice == 2)
        {
            if (amount <= balance)
            {
                balance = balance - amount;
                cout << "Amount withdrawn successfully." << endl;
            }
            else
            {
                cout << "Insufficient balance." << endl;
            }
        }
        else
        {
            cout << "Invalid choice." << endl;
        }
    }

    // Function to display account details
    void display()
    {
        cout << "\nAccount Holder Name: " << accountHolderName << endl;
        cout << "Final Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.input();
    b.operation();
    b.display();

    return 0;
}