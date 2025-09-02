#include <iostream>
using namespace std;

class Base {
public:
    Base(int x) { cout << "Base Constructor " << x << "\n"; }
};

class Derived : public Base {
public:
    Derived(int x) : Base(x) { cout << "Derived Constructor\n"; }
};

int main() {
    Derived d(10);
    return 0;
}
