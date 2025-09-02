#include <iostream>
using namespace std;

class B {
public:
    B(int x) {
        cout << "B: " << x << endl;
    }
};

class A {
    B b;
public:
    A(int x) : b(x) {
        cout << "A Constructor" << endl;
    }
};

int main() {
    A a(10);
    return 0;
}
