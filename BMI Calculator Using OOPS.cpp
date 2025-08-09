#include <iostream>
using namespace std;

class BMI {
    double weight, height;

    double calculateBMI() { return weight / (height * height); }

public:
    void inputData() {
        cout << "Enter weight (kg): ";
        cin >> weight;
        cout << "Enter height (m): ";
        cin >> height;
        displayBMI();
    }

    void displayBMI() {
        double bmi = calculateBMI(); // Nested
        cout << "BMI: " << bmi << " -> ";
        if (bmi < 18.5) cout << "Underweight\n";
        else if (bmi < 25) cout << "Normal\n";
        else cout << "Overweight\n";
    }
};

int main() {
    BMI person;
    person.inputData();
    return 0;
}
