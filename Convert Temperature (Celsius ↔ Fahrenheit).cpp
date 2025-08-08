#include <iostream>
using namespace std;

float convert(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float convert(int fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    cout << "Celsius to Fahrenheit: " << convert(37.0f) << endl;
    cout << "Fahrenheit to Celsius: " << convert(98) << endl;
    return 0;
}
