#include <iostream>
using namespace std;

class A {
protected:
    int a;
public:
    A(int val) : a(val) {}
};

class B {
protected:
    int b;
public:
    B(int val) : b(val) {}
};

class C : public A, public B {
public:
    C(int x, int y) : A(x), B(y) {}
    void result() {
        cout << "Sum: " << a + b << endl;
    }
};

int main() {
    C obj(5, 10);
    obj.result();
    return 0;
}
