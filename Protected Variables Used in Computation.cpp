#include <iostream>
using namespace std;

class Shape {
protected:
    double width, height;
};

class Rectangle : public Shape {
public:
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }
    double area() {
        return width * height;
    }
};

int main() {
    Rectangle r(4.5, 6.0);
    cout << "Area: " << r.area() << endl;
    return 0;
}
