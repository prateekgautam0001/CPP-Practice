#include <iostream>
using namespace std;

class A {
protected:
    int a;
public:
    A(int x) : a(x) {}
};

class B : public A {
protected:
    int b;
public:
    B(int x, int y) : A(x), b(y) {}
};

class C : public B {
public:
    C(int x, int y) : B(x, y) {}
    void result() {
        cout << "Sum: " << a + b << endl;
    }
};

int main() {
    C obj(5, 10);
    obj.result();
    return 0;
}
