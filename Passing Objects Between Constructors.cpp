#include <iostream>
using namespace std;

class Base {
public:
    Base(int x) { cout << "Base: " << x << "\n"; }
};

class Derived : public Base {
public:
    Derived(Base b) : Base(b) { cout << "Derived\n"; }
};

int main() {
    Base b(5);
    Derived d(b);
    return 0;
}
