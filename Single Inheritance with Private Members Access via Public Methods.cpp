#include <iostream>
using namespace std;

class Account {
private:
    double balance;
public:
    void setBalance(double b) {
        balance = b;
    }
    double getBalance() {
        return balance;
    }
};

class SavingsAccount : public Account {
public:
    void displayBalance() {
        cout << "Balance: $" << getBalance() << endl;
    }
};

int main() {
    SavingsAccount s;
    s.setBalance(1000.50);
    s.displayBalance();
    return 0;
}
