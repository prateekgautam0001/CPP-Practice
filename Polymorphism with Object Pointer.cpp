#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived" << endl;
    }
};

int main() {
    Base* ptr = new Derived;
    ptr->show();
    delete ptr;
    return 0;
}
