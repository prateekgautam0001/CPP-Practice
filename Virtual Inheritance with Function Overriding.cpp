#include <iostream>
using namespace std;

class A {
public:
    virtual void message() {
        cout << "Message from A\n";
    }
};

class B : virtual public A {
public:
    void message() override {
        cout << "Message from B\n";
    }
};

class C : virtual public A {
public:
    void message() override {
        cout << "Message from C\n";
    }
};

class D : public B, public C {
public:
    void message() override {
        cout << "Message from D\n";
    }
};

int main() {
    D obj;
    obj.message();
    return 0;
}
