#include <iostream>
using namespace std;

class BankAccount {
public:
    string holder;
    double balance;

    void setData(string h, double b) {
        holder = h;
        balance = b;
    }

    void display() {
        cout << holder << ": $" << balance << endl;
    }
};

void deposit(BankAccount &acc, double amount) {
    acc.balance += amount;
}

int main() {
    BankAccount b;
    b.setData("Ahsan", 1000);
    deposit(b, 500);
    b.display();
    return 0;
}
