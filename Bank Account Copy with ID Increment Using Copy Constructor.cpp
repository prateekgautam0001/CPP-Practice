#include <iostream>
using namespace std;

class Account {
    int id;
    double balance;
public:
    Account(int i, double b) {
        id = i;
        balance = b;
    }
    Account(const Account &a) {
        id = a.id + 1;
        balance = a.balance;
    }
    void show() {
        cout << "ID: " << id << ", Balance: " << balance << endl;
    }
};

int main() {
    Account acc1(100, 5000.75);
    Account acc2 = acc1;
    acc2.show();
    return 0;
}
