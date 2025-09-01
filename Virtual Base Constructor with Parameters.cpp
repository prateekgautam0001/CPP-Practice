#include <iostream>
using namespace std;

class A {
protected:
    int val;
public:
    A(int x) : val(x) {}
};

class B : virtual public A {
public:
    B(int x) : A(x) {}
};

class C : virtual public A {
public:
    C(int x) : A(x) {}
};

class D : public B, public C {
public:
    D(int x) : A(x), B(x), C(x) {}
    void show() {
        cout << "Value: " << val << endl;
    }
};

int main() {
    D obj(50);
    obj.show();
    return 0;
}
