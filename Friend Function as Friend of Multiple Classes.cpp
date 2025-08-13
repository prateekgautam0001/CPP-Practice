#include <iostream>
using namespace std;

class A;
class B;

class A {
private:
    int x;

public:
    A(int val) : x(val) {}
    friend void sum(A, B);
};

class B {
private:
    int y;

public:
    B(int val) : y(val) {}
    friend void sum(A, B);
};

void sum(A a, B b) {
    cout << "Sum: " << a.x + b.y << endl;
}

int main() {
    A obj1(30);
    B obj2(40);
    sum(obj1, obj2);
    return 0;
}
