#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:

    BankAccount() {
        accountHolder = "Unnamed";
        accountNumber = 0;
        balance = 0.0;
    }

    BankAccount(string name) {
        accountHolder = name;
        accountNumber = 1001;
        balance = 0.0;
    }

    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        accountNumber = 1002;
        balance = initialBalance;
    }

    void display() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl << endl;
    }
};

int main() {
    BankAccount a1;                            
    BankAccount a2("Alice");       
    BankAccount a3("Bob", 5000.75);        

    cout << "Default Account:\n";
    a1.display();

    cout << "Account with Name:\n";
    a2.display();

    cout << "Account with Name & Balance:\n";
    a3.display();

    return 0;
}
