#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNo, double initialBalance = 0.0) {
        accountHolder = name;
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. Amount added: ₹" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        }
        else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        }
        else {
            balance -= amount;
            cout << "Withdrawal successful. Amount withdrawn: ₹" << amount << endl;
        }
    }

    void checkBalance() const {
        cout << "Current balance: ₹" << balance << endl;
    }

    void display() const {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        checkBalance();
    }
};

int main() {
    BankAccount acc("Aditya Upadhayay", 101, 5000);

    acc.display();

    acc.deposit(2000);
    acc.withdraw(1500);
    acc.checkBalance();

    return 0;
}
