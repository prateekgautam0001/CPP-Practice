#include <iostream>
using namespace std;

class A {
    int x;
public:
    A(int val) : x(val) {}
    void copyFrom(A* other) {
        this->x = other->x;
    }
    void print() {
        cout << x << endl;
    }
};

int main() {
    A a1(50), a2(0);
    a2.copyFrom(&a1);
    a2.print();
    return 0;
}
