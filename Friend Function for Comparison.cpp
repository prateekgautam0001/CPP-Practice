#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}
    friend bool isEqual(Rectangle, Rectangle);
};

bool isEqual(Rectangle r1, Rectangle r2) {
    return (r1.width == r2.width && r1.height == r2.height);
}

int main() {
    Rectangle r1(4, 5), r2(4, 5);
    if (isEqual(r1, r2))
        cout << "Equal\n";
    else
        cout << "Not equal\n";
    return 0;
}
