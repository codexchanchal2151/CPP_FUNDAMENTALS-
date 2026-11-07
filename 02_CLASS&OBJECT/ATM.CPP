#include <iostream>
using namespace std;

class ATM {
    double balance;
public:
    ATM(double initial_balance) {
        balance = initial_balance;
    }
    
    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
            cout << "Successfully deposited: Rs. " << amount << endl;
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }
    
    void withdraw(double amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Successfully withdrawn: Rs. " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!\n";
        }
    }
    
    void checkBalance() {
        cout << "Current Balance: Rs. " << balance << endl;
    }
};

int main() {
    ATM myATM(5000.0);
    int choice;
    double amount;
    
    do {
        cout << "\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nEnter choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                myATM.checkBalance();
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                myATM.deposit(amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                myATM.withdraw(amount);
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while(choice != 4);
    
    return 0;
}
