#include <iostream>
using namespace std;

class Account {
private:
    double balance;

public:
    Account(double b) : balance(b) {}

    friend class Auditor;
};

class Auditor {
public:
    void audit(Account a1, Account a2) {
        cout << "Combined balance: " << a1.balance + a2.balance << endl;
    }
};

int main() {
    Account a1(1000.50), a2(2500.75);
    Auditor auditor;
    auditor.audit(a1, a2);
    return 0;
}
