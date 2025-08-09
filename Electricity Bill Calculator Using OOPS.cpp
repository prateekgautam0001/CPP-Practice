#include <iostream>
using namespace std;

class ElectricityBill {
    int units;

    double calculateCharge() {
        if (units <= 100) return units * 1.5;
        else if (units <= 300) return (100 * 1.5) + ((units - 100) * 2);
        else return (100 * 1.5) + (200 * 2) + ((units - 300) * 3);
    }

public:
    void inputUnits() {
        cout << "Enter units consumed: ";
        cin >> units;
        displayBill();
    }

    void displayBill() {
        cout << "Total Bill: Rs. " << calculateCharge() << "\n"; // Nested
    }
};

int main() {
    ElectricityBill eb;
    eb.inputUnits();
    return 0;
}
