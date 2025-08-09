#include <iostream>
using namespace std;

class Circle {
    double radius;

    double area() { return 3.1416 * radius * radius; }
    double circumference() { return 2 * 3.1416 * radius; }

public:
    void setRadius(double r) {
        radius = r;
        showDetails();
    }

    void showDetails() {
        cout << "Area: " << area() << "\n";               // Nested
        cout << "Circumference: " << circumference() << "\n"; // Nested
    }
};

int main() {
    Circle c;
    c.setRadius(7);
    return 0;
}
