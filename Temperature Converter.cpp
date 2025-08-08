#include <iostream>
using namespace std;

class Temperature {
private:
    float celsius;

public:
    void setTemp(float c) {
        celsius = c;
    }

    float toFahrenheit() {
        return (celsius * 9 / 5) + 32;
    }
};

int main() {
    Temperature t;
    t.setTemp(37.0);
    cout << "Fahrenheit: " << t.toFahrenheit() << endl;
    return 0;
}
