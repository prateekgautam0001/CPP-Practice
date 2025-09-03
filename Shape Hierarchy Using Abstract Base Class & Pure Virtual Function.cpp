#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
public:
    void area() {
        cout << "Circle area\n";
    }
};

class Rectangle : public Shape {
public:
    void area() {
        cout << "Rectangle area\n";
    }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();
    s1->area();
    s2->area();
    delete s1;
    delete s2;
}
