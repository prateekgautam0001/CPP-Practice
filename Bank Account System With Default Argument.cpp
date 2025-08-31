#include <iostream>
using namespace std;

class BankAccount {
    string name;
    double balance;
public:
    BankAccount(string n = "Unknown", double b = 0.0) {
        name = n;
        balance = b;
    }
    void display() {
        cout << "Name: " << name << ", Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount a1;
    BankAccount a2("Alice", 1500.75);
    a1.display();
    a2.display();
    return 0;
}
