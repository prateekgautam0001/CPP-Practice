#include <iostream>
using namespace std;

class Interest {
private:
    float principal, rate, time;

public:
    void setValues(float p, float r, float t) {
        principal = p;
        rate = r;
        time = t;
    }

    float calculateSI() {
        return (principal * rate * time) / 100;
    }
};

int main() {
    Interest i;
    i.setValues(1000, 5, 2);
    cout << "Simple Interest: ₹" << i.calculateSI() << endl;
    return 0;
}
