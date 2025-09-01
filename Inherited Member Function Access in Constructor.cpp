#include <iostream>
using namespace std;

class Base {
public:
    void greet() {
        cout << "Hello from Base\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        greet();
    }
};

int main() {
    Derived d;
    return 0;
}
