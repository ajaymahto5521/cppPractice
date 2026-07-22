#include<iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount() : balance(0) {}
   
    int accountNumber;
    string accountHolderName;

    void displayMenu(){
        int choice;
        cout<<"\n\n==== Welcome to State Bank of India =====\n\n";
        cout<<"Enter choice: \n";
        cout<<"1. Deposit Amount: \n";
        cout<<"2. Withdraw Amount: \n";
        cout<<"3. Check Balance: \n";
        cout<<"4. Exit\n";
        cin>>choice;

    switch(choice){

    case 1 : {
        double amount;
        cout<<"Enter amount you want to deposit : ";
        cin>>amount;
        deposit(amount);
        break;
            }

    case 2 : {
        double amount;
        cout<<"Enter amount you want to withdraw : ";
        cin>>amount;
        withdraw(amount);
        break;
            }

    case 3: {
        cout<<"Your current balance is: "<<displayBalance();
        break;
            }
    case 4:
            {
        cout<<"Thank you for using SBI";
        break;
            }   
    default:
    cout<<"Invalid Choice" ;
    }
}
    void deposit(double amount){
        double deposit= deposit + amount;
    }

    void withdraw(double amount){
        if(amount<=balance){
        double withdraw = amount - withdraw;
        }
        else
        cout<<"Insuffecient Choice";
    }

    double displayBalance(){
        return balance;
    }

};

int main(){

    BankAccount a;

    a.displayMenu();

    return 0;

}