#include <iostream>
using namespace std;

class Vector {
    int x, y;
public:
    Vector(int a, int b) {
        x = a;
        y = b;
    }
    Vector(const Vector &v) {
        x = v.x;
        y = v.y;
    }
    void print() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector v1(3, 4);
    Vector v2 = v1;
    v2.print();
    return 0;
}
