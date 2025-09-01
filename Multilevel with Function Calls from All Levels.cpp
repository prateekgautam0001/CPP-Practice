#include <iostream>
using namespace std;

class A {
public:
    void msgA() {
        cout << "Message from A\n";
    }
};

class B : public A {
public:
    void msgB() {
        cout << "Message from B\n";
    }
};

class C : public B {
public:
    void msgC() {
        cout << "Message from C\n";
    }
};

int main() {
    C obj;
    obj.msgA();
    obj.msgB();
    obj.msgC();
    return 0;
}
