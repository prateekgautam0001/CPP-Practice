#include <iostream>
using namespace std;

class Temperature {
private:
    float celsius;

public:
    Temperature() {
        celsius = 0.0;
    }

    Temperature(float c) {
        celsius = c;
    }

    Temperature(float f, bool isFahrenheit) {
        if (isFahrenheit)
            celsius = (f - 32) * 5 / 9;
        else
            celsius = f;
    }

    void showCelsius() {
        cout << "Temperature: " << celsius << "°C" << endl;
    }
};

int main() {
    Temperature t1;
    Temperature t2(36.6f);
    Temperature t3(98.6f, true);
    t1.showCelsius();
    t2.showCelsius();
    t3.showCelsius();
    return 0;
}
