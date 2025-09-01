#include <iostream>
using namespace std;

class A {
public:
    virtual void display() {
        cout << "A display\n";
    }
};

class B : public A {
public:
    void display() override {
        cout << "B display\n";
    }
};

class C : public B {
public:
    void display() override {
        cout << "C display\n";
    }
};

int main() {
    C obj;
    obj.display();
    return 0;
}
