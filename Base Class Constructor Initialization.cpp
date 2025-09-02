#include <iostream>
using namespace std;

class Base {
public:
    Base(int x) {
        cout << "Base: " << x << endl;
    }
};

class Derived : public Base {
public:
    Derived(int y) : Base(y) {
        cout << "Derived" << endl;
    }
};

int main() {
    Derived d(20);
    return 0;
}
