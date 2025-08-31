#include <iostream>
using namespace std;

class Temperature {
    float celsius;
public:
    Temperature(float temp = 25.0) {
        celsius = temp;
    }
    void displayFahrenheit() {
        cout << (celsius * 9 / 5 + 32) << " F" << endl;
    }
};

int main() {
    Temperature t1, t2(30.5);
    t1.displayFahrenheit();
    t2.displayFahrenheit();
    return 0;
}
