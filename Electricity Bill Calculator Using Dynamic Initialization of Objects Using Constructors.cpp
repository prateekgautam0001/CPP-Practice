#include <iostream>
using namespace std;

class Bill {
    string consumer;
    int units;
public:
    Bill(string c, int u) {
        consumer = c;
        units = u;
    }
    void calculateBill() {
        double amount = (units <= 100) ? units * 1.5 : 100 * 1.5 + (units - 100) * 2.5;
        cout << consumer << ": $" << amount << endl;
    }
};

int main() {
    Bill b("David", 150);
    b.calculateBill();
    return 0;
}
