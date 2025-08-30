#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    Rectangle() {
        length = width = 1;
    }

    Rectangle(int s) {
        length = width = s;
    }

    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    int area() {
        return length * width;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(4, 6);
    cout << "Area 1: " << r1.area() << endl;
    cout << "Area 2: " << r2.area() << endl;
    cout << "Area 3: " << r3.area() << endl;
    return 0;
}
