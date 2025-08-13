#include <iostream>
using namespace std;

class Circle {
public:
    double radius;
    Circle(double r) : radius(r) {}

    double area() {
        return 3.14 * radius * radius;
    }
};

void showArea(Circle *c) {
    cout << "Area: " << c->area() << endl;
}

int main() {
    Circle c1(5.0);
    showArea(&c1);
    return 0;
}
