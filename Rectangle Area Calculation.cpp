#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    Rectangle() {
        length = 10;
        width = 5;
    }

    int area() {
        return length * width;
    }
};

int main() {
    Rectangle r;
    cout << "Area of rectangle: " << r.area() << endl;
    return 0;
}
