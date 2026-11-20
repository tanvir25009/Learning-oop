// Name: Md. Tanvir Shuvo
// Student ID: IT25009
// Course: ICT 2106 - Object-Oriented Programming Lab

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:                       // cannot be modified directly from main()
    int accountNumber;
    string accountHolder;
    double balance;

public:
    // Parameterized constructor with initial validation
    BankAccount(int accNo, string holder, double initialBalance) {
        accountNumber = accNo;
        accountHolder = holder;
        balance = (initialBalance >= 0) ? initialBalance : 0;
    }

    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Error: Deposit amount must be positive." << endl;
            return;
        }
        balance += amount;
        cout << "Deposited " << amount << " successfully." << endl;
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Error: Withdrawal amount must be positive." << endl;
            return;
        }
        if (amount > balance) {
            cout << "Error: Insufficient balance. Available: " << balance << endl;
            return;
        }
        balance -= amount;
        cout << "Withdrew " << amount << " successfully." << endl;
    }

    double getBalance() {
        return balance;
    }

    void displayAccountInformation() {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Balance        : " << balance << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
    cout << "Name: Md. Tanvir Shuvo" << endl;
    cout << "Student ID: IT25009" << endl << endl;
    BankAccount acc1(1001, "Rahim", 5000);
    BankAccount acc2(1002, "Karim", 2000);

    cout << "===== Account 1 =====" << endl;
    acc1.displayAccountInformation();
    acc1.deposit(1500);
    acc1.withdraw(800);
    acc1.withdraw(10000);      // exceeds balance -> rejected
    acc1.deposit(-200);        // invalid -> rejected
    cout << "Current balance: " << acc1.getBalance() << endl;
    acc1.displayAccountInformation();

    cout << "\n===== Account 2 =====" << endl;
    acc2.displayAccountInformation();
    acc2.withdraw(500);
    acc2.deposit(0);           // invalid -> rejected
    acc2.displayAccountInformation();

    // acc1.balance = 999999;  // ERROR: 'balance' is private

    return 0;
}
