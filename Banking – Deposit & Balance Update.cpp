#include <iostream>
using namespace std;

class BankAccount {
    string name;
    double balance;

    void updateBalance(double amount) {
        balance += amount;
    }

public:
    BankAccount(string n, double b) : name(n), balance(b) {}

    void deposit(double amount) {
        updateBalance(amount); // Nested call
        cout << "Deposited: " << amount << "\n";
        displayBalance();
    }

    void displayBalance() {
        cout << "Current Balance: " << balance << "\n";
    }
};

int main() {
    BankAccount acc("Prateek", 5000);
    acc.deposit(1500);
    return 0;
}
