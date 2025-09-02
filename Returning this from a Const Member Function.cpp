#include <iostream>
using namespace std;

class A {
    int x;
public:
    A(int x) : x(x) {}
    const A* getThis() const {
        return this;
    }
    void show() const {
        cout << x << endl;
    }
};

int main() {
    A obj(7);
    obj.getThis()->show();
    return 0;
}
