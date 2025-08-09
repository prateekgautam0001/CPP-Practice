#include <iostream>
using namespace std;

class InterestCalculator {
    double p, r, t;

    double calculateSI() { return (p * r * t) / 100; }

public:
    void inputDetails() {
        cout << "Enter Principal: ";
        cin >> p;
        cout << "Enter Rate (%): ";
        cin >> r;
        cout << "Enter Time (years): ";
        cin >> t;
        displayInterest();
    }

    void displayInterest() {
        cout << "Simple Interest: " << calculateSI() << "\n"; // Nested
    }
};

int main() {
    InterestCalculator ic;
    ic.inputDetails();
    return 0;
}
