#include <iostream>
using namespace std;

class Rectangle {
    int length, width;
public:
    Rectangle(int l = 1, int w = 1) {
        length = l;
        width = w;
    }
    int area() {
        return length * width;
    }
};

int main() {
    Rectangle r1, r2(5), r3(4, 6);
    cout << r1.area() << endl;
    cout << r2.area() << endl;
    cout << r3.area() << endl;
    return 0;
}
