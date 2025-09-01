#include <iostream>
using namespace std;

class A {
protected:
    int val = 5;
};

class B : public A {};

class C : public B {
public:
    void show() {
        cout << "val = " << val << endl;
    }
};

int main() {
    C c;
    c.show();
    return 0;
}
