#include <iostream>
using namespace std;

class Currency {
    double inr;

    double toUSD() { return inr / 83.0; }
    double toEuro() { return inr / 91.0; }

public:
    void inputINR() {
        cout << "Enter amount in INR: ";
        cin >> inr;
        displayConversion();
    }

    void displayConversion() {
        cout << "USD: " << toUSD() << "\n";   // Nested
        cout << "Euro: " << toEuro() << "\n"; // Nested
    }
};

int main() {
    Currency c;
    c.inputINR();
    return 0;
}
