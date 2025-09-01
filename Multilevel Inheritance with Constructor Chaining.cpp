#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "A Constructor\n";
    }
};

class B : public A {
public:
    B() {
        cout << "B Constructor\n";
    }
};

class C : public B {
public:
    C() {
        cout << "C Constructor\n";
    }
};

int main() {
    C obj;
    return 0;
}
