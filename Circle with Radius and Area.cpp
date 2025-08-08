#include <iostream>
using namespace std;

class Circle {
private:
    float radius;

public:
    void setRadius(float r) {
        radius = r;
    }

    float area() {
        return 3.14 * radius * radius;
    }

    void show() {
        cout << "Radius: " << radius << ", Area: " << area() << endl;
    }
};

int main() {
    Circle c;
    c.setRadius(4.5);
    c.show();
    return 0;
}
