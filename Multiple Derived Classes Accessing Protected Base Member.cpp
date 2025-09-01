#include <iostream>
using namespace std;

class Account {
protected:
    double balance;
public:
    Account(double b) : balance(b) {}
};

class Savings : public Account {
public:
    Savings(double b) : Account(b) {}
    void addInterest() {
        balance += balance * 0.05;
    }
    void display() {
        cout << "Savings Balance: " << balance << endl;
    }
};

class Checking : public Account {
public:
    Checking(double b) : Account(b) {}
    void deductFee() {
        balance -= 15.00;
    }
    void display() {
        cout << "Checking Balance: " << balance << endl;
    }
};

int main() {
    Savings s(1000);
    s.addInterest();
    s.display();

    Checking c(800);
    c.deductFee();
    c.display();

    return 0;
}
