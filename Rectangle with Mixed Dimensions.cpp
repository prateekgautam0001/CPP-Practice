#include <iostream>
using namespace std;

template <typename W, typename H>
class Rectangle {
    W width;
    H height;
public:
    Rectangle(W w, H h) : width(w), height(h) {}
    auto area() { return width * height; }
};

int main() {
    Rectangle<int, double> r(4, 5.5);
    cout << r.area() << endl;
}
