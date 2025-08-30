#include <iostream>
using namespace std;

class Temperature {
private:
    float celsius;

public:
    Temperature() {
        celsius = 25.0;
    }

    float toFahrenheit() {
        return (celsius * 9 / 5) + 32;
    }
};

int main() {
    Temperature t;
    cout << "Temperature in Fahrenheit: " << t.toFahrenheit() << endl;
    return 0;
}
