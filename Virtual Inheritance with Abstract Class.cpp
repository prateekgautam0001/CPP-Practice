#include <iostream>
using namespace std;

class A {
public:
    virtual void run() = 0;
};

class B : virtual public A {
public:
    void run() override {
        cout << "Run from B\n";
    }
};

class C : virtual public A {};

class D : public B, public C {};

int main() {
    D obj;
    obj.run();
    return 0;
}
