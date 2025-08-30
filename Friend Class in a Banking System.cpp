#include <iostream>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount(string o, double b) : owner(o), balance(b) {}

    friend class BankManager;
};

class BankManager {
public:
    void printBalance(BankAccount &acc) {
        cout << acc.owner << "'s Balance: $" << acc.balance << endl;
    }
};

int main() {
    BankAccount acc("Alice", 10000.75);
    BankManager mgr;
    mgr.printBalance(acc);
    return 0;
}
