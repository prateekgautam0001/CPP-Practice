#include <iostream>
using namespace std;

class Parent {
public:
    void greet() {
        cout << "Hello from Parent\n";
    }
};

class Child1 : public Parent {
public:
    void childMsg() {
        cout << "Child1\n";
    }
};

class Child2 : public Parent {
public:
    void childMsg() {
        cout << "Child2\n";
    }
};

int main() {
    Child1 c1;
    Child2 c2;
    c1.greet();
    c1.childMsg();
    c2.greet();
    c2.childMsg();
    return 0;
}
