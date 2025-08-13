#include <iostream>
using namespace std;

class B; // Forward declaration

class A {
private:
    int x;

public:
    A(int val) : x(val) {}
    friend void compare(A, B);
};

class B {
private:
    int y;

public:
    B(int val) : y(val) {}
    friend void compare(A, B);
};

void compare(A a, B b) {
    if (a.x > b.y)
        cout << "A is greater\n";
    else
        cout << "B is greater or equal\n";
}

int main() {
    A obj1(10);
    B obj2(20);
    compare(obj1, obj2);
    return 0;
}
