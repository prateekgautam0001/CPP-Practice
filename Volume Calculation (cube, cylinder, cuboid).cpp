#include <iostream>
using namespace std;

int volume(int side) {
    return side * side * side;
}

double volume(double radius, int height) {
    return 3.14 * radius * radius * height;
}

int volume(int l, int b, int h) {
    return l * b * h;
}

int main() {
    cout << "Volume of Cube: " << volume(3) << endl;
    cout << "Volume of Cylinder: " << volume(2.5, 10) << endl;
    cout << "Volume of Cuboid: " << volume(2, 3, 4) << endl;
    return 0;
}
