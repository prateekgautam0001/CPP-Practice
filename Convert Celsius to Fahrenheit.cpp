#include <iostream>
using namespace std;

inline float toFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

int main() {
    float celsius = 37.0;
    cout << "Fahrenheit: " << toFahrenheit(celsius);
    return 0;
}
