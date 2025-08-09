#include <iostream>
using namespace std;

class Temperature {
    double celsius;

    double toFahrenheit() { return (celsius * 9/5) + 32; }
    double toKelvin() { return celsius + 273.15; }

public:
    void inputTemperature() {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        displayConversions();
    }

    void displayConversions() {
        cout << "Fahrenheit: " << toFahrenheit() << "\n"; // Nested
        cout << "Kelvin: " << toKelvin() << "\n";         // Nested
    }
};

int main() {
    Temperature t;
    t.inputTemperature();
    return 0;
}
