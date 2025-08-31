#include <iostream>
using namespace std;

class Circle {
    double radius;
public:
    Circle(double r = 1.0) {
        radius = r;
    }
    double area() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle c1, c2(5.5);
    cout << c1.area() << endl;
    cout << c2.area() << endl;
    return 0;
}
