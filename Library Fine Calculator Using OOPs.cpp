#include <iostream>
using namespace std;

class Library {
    int daysLate;

    double calculateFine() {
        if (daysLate <= 5) return daysLate * 1;
        else if (daysLate <= 10) return (5 * 1) + ((daysLate - 5) * 2);
        else return (5 * 1) + (5 * 2) + ((daysLate - 10) * 5);
    }

public:
    void inputDays() {
        cout << "Enter days late: ";
        cin >> daysLate;
        displayFine();
    }

    void displayFine() {
        cout << "Total Fine: Rs. " << calculateFine() << "\n"; // Nested
    }
};

int main() {
    Library lib;
    lib.inputDays();
    return 0;
}
