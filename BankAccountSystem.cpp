#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount() : balance(0) {}

    int accountNumber;
    string accountHolderName;

    void displayMenu()
    {
        int choice;

        do
        {
            cout << "\n\n==== Welcome to State Bank of India =====\n\n";
            cout << "1. Deposit Amount\n";
            cout << "2. Withdraw Amount\n";
            cout << "3. Check Balance\n";
            cout << "4. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch(choice)
            {
                case 1:
                {
                    double amount;
                    cout << "Enter amount you want to deposit: ";
                    cin >> amount;
                    deposit(amount);
                    break;
                }

                case 2:
                {
                    double amount;
                    cout << "Enter amount you want to withdraw: ";
                    cin >> amount;
                    withdraw(amount);
                    break;
                }

                case 3:
                {
                    cout << "Your current balance is: ₹" 
                         << displayBalance() << endl;
                    break;
                }

                case 4:
                {
                    cout << "Thank you for using SBI.\n";
                    break;
                }

                default:
                    cout << "Invalid Choice. Please try again.\n";
            }

        } while(choice != 4);
    }

    void deposit(double amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully.\n";
        }
        else
        {
            cout << "Invalid amount.\n";
        }
    }

    void withdraw(double amount)
    {
        if(amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
        else if(amount > balance)
        {
            cout << "Insufficient Balance.\n";
        }
        else
        {
            cout << "Invalid amount.\n";
        }
    }

    double displayBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount a;

    a.displayMenu();

    return 0;
}