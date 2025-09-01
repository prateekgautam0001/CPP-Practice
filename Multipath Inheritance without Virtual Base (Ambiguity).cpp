#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Class A\n";
    }
};

class B : public A {};

class C : public A {};

class D : public B, public C {
public:
    void show() {
        // display(); // ambiguous
        B::display();
        C::display();
    }
};

int main() {
    D obj;
    obj.show();
    return 0;
}
