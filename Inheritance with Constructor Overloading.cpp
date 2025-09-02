#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base Default\n"; }
    Base(int x) { cout << "Base Param: " << x << "\n"; }
};

class Derived : public Base {
public:
    Derived() : Base() { cout << "Derived Default\n"; }
    Derived(int x) : Base(x) { cout << "Derived Param: " << x << "\n"; }
};

int main() {
    Derived d1;
    Derived d2(50);
    return 0;
}
