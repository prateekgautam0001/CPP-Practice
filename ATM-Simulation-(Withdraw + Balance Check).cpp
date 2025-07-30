#include <iostream>
using namespace std;

int main() {
    int balance = 10000, amount, choice;

menu:
    cout << "\n1. Check Balance\n2. Withdraw\n3. Exit\nChoice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Available Balance: Rs. " << balance << endl;
        goto menu;
    }
    else if (choice == 2) {
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient Balance!\n";
        } else {
            balance -= amount;
            cout << "Withdrawn Rs. " << amount << ". Remaining: Rs. " << balance << endl;
        }
        goto menu;
    }
    else if (choice == 3) {
        cout << "Thank you for using the ATM.\n";
    }
    else {
        cout << "Invalid choice!\n";
        goto menu;
    }

    return 0;
}