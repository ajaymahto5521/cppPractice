//Create a Bank class. Keep balance private. Create deposit() and getBalance() functions.
#include <iostream>
using namespace std;

class Bank
{
private:

    int balance;

public:

    Bank()
    {
        balance = 0;
    }

    void deposit(int amount)
    {
        balance += amount;
    }

    int getBalance()
    {
        return balance;
    }
};

int main()
{
    Bank b;

    b.deposit(1000);

    cout<<b.getBalance();
}