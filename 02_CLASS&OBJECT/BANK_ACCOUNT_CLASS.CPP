#include <iostream>
using namespace std;

class Bank
{
public:
    string name;
    int balance;

    void deposit(int amount)
    {
        balance = balance + amount;
    }

    void withdraw(int amount)
    {
        if (amount <= balance)
            balance = balance - amount;
        else
            cout << "Insufficient Balance" << endl;
    }

    void display()
    {
        cout << "Account Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Bank b1;

    b1.name = "Chanchal";
    b1.balance = 10000;

    b1.deposit(2000);
    b1.withdraw(3000);

    b1.display();

    return 0;
}
