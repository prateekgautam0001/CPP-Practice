#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
    double a, b, c;
public:
    Triangle(double x, double y, double z) {
        a = x; b = y; c = z;
    }
    void area() {
        double s = (a + b + c) / 2;
        double ar = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area: " << ar << endl;
    }
};

int main() {
    Triangle t(3, 4, 5);
    t.area();
    return 0;
}
