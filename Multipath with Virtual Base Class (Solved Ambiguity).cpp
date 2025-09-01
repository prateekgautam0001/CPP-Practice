#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Class A\n";
    }
};

class B : virtual public A {};

class C : virtual public A {};

class D : public B, public C {
public:
    void show() {
        display();
    }
};

int main() {
    D obj;
    obj.show();
    return 0;
}
