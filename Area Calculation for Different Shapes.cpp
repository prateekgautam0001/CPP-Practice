#include <iostream>
using namespace std;

float area(float radius) {
    return 3.14 * radius * radius;
}

int area(int length, int breadth) {
    return length * breadth;
}

double area(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    cout << "Area of Circle: " << area(5.0f) << endl;
    cout << "Area of Rectangle: " << area(4, 5) << endl;
    cout << "Area of Triangle: " << area(5.5, 4.2) << endl;
    return 0;
}
