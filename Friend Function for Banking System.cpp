#include <iostream>
using namespace std;

class Account {
private:
    string holder;
    double balance;

public:
    Account(string h, double b) : holder(h), balance(b) {}
    friend void showBalance(Account);
};

void showBalance(Account acc) {
    cout << acc.holder << "'s Balance: $" << acc.balance << endl;
}

int main() {
    Account a("Ali", 1200.50);
    showBalance(a);
    return 0;
}
