#include <iostream>
using namespace std;

class Rectangle {
    int length, width;
public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }
    Rectangle(const Rectangle &r) {
        length = r.length;
        width = r.width;
    }
    int area() {
        return length * width;
    }
};

int main() {
    Rectangle r1(4, 5);
    Rectangle r2 = r1;
    cout << r2.area() << endl;
    return 0;
}
