#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    void createAccount(string name, double amount) {
        accountHolder = name;
        balance = amount;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void showDetails() {
        cout << "Account Holder: " << accountHolder << "\nBalance: ₹" << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.createAccount("Raj", 5000);
    acc.deposit(1500);
    acc.showDetails();
    return 0;
}
