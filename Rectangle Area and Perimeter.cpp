#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    int area() {
        return length * width;
    }

    int perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle r;
    r.setDimensions(5, 3);
    cout << "Area: " << r.area() << "\nPerimeter: " << r.perimeter() << endl;
    return 0;
}
