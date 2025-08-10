#include <iostream>
using namespace std;

class BankAccount {
    float balance;
    static float interestRate;

public:
    BankAccount(float bal) : balance(bal) {}

    void addInterest() {
        balance += (balance * interestRate / 100);
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }

    static void setInterestRate(float rate) {
        interestRate = rate;
    }
};

float BankAccount::interestRate = 5.0;

int main() {
    BankAccount::setInterestRate(6.5);
    BankAccount acc1(1000), acc2(2000);
    acc1.addInterest();
    acc2.addInterest();
    acc1.showBalance();
    acc2.showBalance();
    return 0;
}
