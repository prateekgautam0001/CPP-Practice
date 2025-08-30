#include <iostream>
using namespace std;

class Bank {
private:
    string accHolder;
    double balance;

public:
    Bank(string name, double bal) {
        accHolder = name;
        balance = bal;
    }

    void show() {
        cout << "Account Holder: " << accHolder << ", Balance: $" << balance << endl;
    }
};

int main() {
    Bank b("Alice", 1500.00);
    b.show();
    return 0;
}
