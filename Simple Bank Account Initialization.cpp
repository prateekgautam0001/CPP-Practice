#include <iostream>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount() {
        owner = "Customer";
        balance = 1000.0;
    }

    void show() {
        cout << "Owner: " << owner << ", Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.show();
    return 0;
}
