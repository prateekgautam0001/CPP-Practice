#include <iostream>
using namespace std;

class Base {
public:
    Base(int x) { cout << "Base: " << x << "\n"; }
};

class Derived : public Base {
    int y;
public:
    Derived(int x, int z) : Base(x), y(z) {
        cout << "Derived: " << y << "\n";
    }
};

int main() {
    Derived d(10, 20);
    return 0;
}
