#include <iostream>
using namespace std;

class Shape {
protected:
    double val;
public:
    void setValue(double v) {
        val = v;
    }
};

class Square : public Shape {
public:
    double area() {
        return val * val;
    }
};

class Circle : public Shape {
public:
    double area() {
        return 3.14 * val * val;
    }
};

int main() {
    Square s;
    Circle c;
    s.setValue(4);
    c.setValue(3);
    cout << "Square area: " << s.area() << endl;
    cout << "Circle area: " << c.area() << endl;
    return 0;
}
