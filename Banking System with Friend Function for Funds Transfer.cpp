#include <iostream>
using namespace std;

class Account {
private:
    string name;
    double balance;

public:
    Account(string n, double b) : name(n), balance(b) {}
    void show() const { cout << name << " Balance: $" << balance << endl; }

    friend void transfer(Account &from, Account &to, double amount);
};

void transfer(Account &from, Account &to, double amount) {
    if (from.balance >= amount) {
        from.balance -= amount;
        to.balance += amount;
        cout << "Transferred $" << amount << " from " << from.name << " to " << to.name << endl;
    } else {
        cout << "Insufficient funds in " << from.name << "'s account.\n";
    }
}

int main() {
    Account a1("Alice", 5000), a2("Bob", 2000);
    a1.show(); a2.show();
    transfer(a1, a2, 1500);
    a1.show(); a2.show();
    return 0;
}
