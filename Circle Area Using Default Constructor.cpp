#include <iostream>
using namespace std;

class Circle {
private:
    float radius;

public:
    Circle() {
        radius = 5.0;
    }

    float area() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle c;
    cout << "Area of circle: " << c.area() << endl;
    return 0;
}
