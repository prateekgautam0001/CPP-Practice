#include <iostream>
using namespace std;

class B;

class A {
private:
    int valA;

public:
    A(int v) : valA(v) {}

    friend class B;
};

class B {
private:
    int valB;

public:
    B(int v) : valB(v) {}

    void showBoth(A a) {
        cout << "A's value: " << a.valA << ", B's value: " << valB << endl;
    }

    friend class A;
};

int main() {
    A a(5);
    B b(10);
    b.showBoth(a);
    return 0;
}
