#include <iostream>
using namespace std;

class Base {
public:
    Base(int x = 0) { cout << "Base: " << x << "\n"; }
};

class Derived : public Base {
public:
    Derived(int y = 1) : Base(y) { cout << "Derived: " << y << "\n"; }
};

int main() {
    Derived d;
    return 0;
}
