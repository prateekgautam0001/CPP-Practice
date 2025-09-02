#include <iostream>
using namespace std;

class A {
    int x, y;
public:
    A() : x(0), y(0) {
        cout << x << " " << y << endl;
    }
    A(int a, int b) : x(a), y(b) {
        cout << x << " " << y << endl;
    }
};

int main() {
    A a1;
    A a2(10, 20);
    return 0;
}
