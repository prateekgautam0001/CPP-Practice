#include <iostream>
using namespace std;

class Bank {
    string name;
    double balance;

public:
    void openAccount() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void display() {
        cout << "Name: " << name << " | Balance: " << balance << "\n";
    }
};

int main() {
    int n;
    cout << "Enter number of accounts: ";
    cin >> n;

    Bank *accounts = new Bank[n]; // Array of objects
    for (int i = 0; i < n; i++) accounts[i].openAccount();
    cout << "\n--- Accounts ---\n";
    for (int i = 0; i < n; i++) accounts[i].display();

    delete[] accounts;
    return 0;
}
