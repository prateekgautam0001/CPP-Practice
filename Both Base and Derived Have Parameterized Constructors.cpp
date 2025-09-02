#include <iostream>
using namespace std;

class Base {
public:
    Base(int x) { cout << "Base: " << x << "\n"; }
};

class Derived : public Base {
public:
    Derived(int x, int y) : Base(x) { cout << "Derived: " << y << "\n"; }
};

int main() {
    Derived d(5, 10);
    return 0;
}
