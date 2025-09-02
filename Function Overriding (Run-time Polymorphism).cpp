#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base\n";
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived\n";
    }
};

int main() {
    Base* ptr;
    Derived d;
    ptr = &d;
    ptr->show();
    return 0;
}
