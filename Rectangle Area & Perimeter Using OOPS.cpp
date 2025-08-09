#include <iostream>
using namespace std;

class Rectangle {
    double length, width;

    double area() { return length * width; }
    double perimeter() { return 2 * (length + width); }

public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
        displayDetails();
    }

    void displayDetails() {
        cout << "Area: " << area() << "\n";           // Nested
        cout << "Perimeter: " << perimeter() << "\n"; // Nested
    }
};

int main() {
    Rectangle r;
    r.setDimensions(5.5, 3.2);
    return 0;
}
