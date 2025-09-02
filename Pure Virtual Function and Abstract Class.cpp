#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
public:
    void area() override {
        cout << "Circle area\n";
    }
};

int main() {
    Shape* s = new Circle();
    s->area();
    delete s;
    return 0;
}
