#include <iostream>
using namespace std;

class Base {
protected:
    void greet() {
        cout << "Hello from Base\n";
    }
};

class Derived : public Base {
public:
    void callGreet() {
        greet();
    }
};

int main() {
    Derived d;
    d.callGreet();
    return 0;
}
