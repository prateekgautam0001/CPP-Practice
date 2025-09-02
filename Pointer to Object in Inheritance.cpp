#include <iostream>
using namespace std;

class Base {
public:
    void greet() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void greet() {
        cout << "Derived class" << endl;
    }
};

int main() {
    Derived d;
    Base* ptr = &d;
    ptr->greet();
    return 0;
}
