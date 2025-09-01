#include <iostream>
using namespace std;

class A {
public:
    void print() {
        cout << "From A\n";
    }
};

class B : public A {
public:
    void print() {
        cout << "From B\n";
    }
};

class C : public B {
public:
    void print() {
        cout << "From C\n";
    }
};

int main() {
    C obj;
    obj.print();
    obj.B::print();
    obj.A::print();
    return 0;
}
