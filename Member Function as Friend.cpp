#include <iostream>
using namespace std;

class B;

class A {
private:
    int data;

public:
    A(int d) : data(d) {}

    friend void B::show(A);
};

class B {
public:
    void show(A a) {
        cout << "Accessing A's data: " << a.data << endl;
    }
};

int main() {
    A a(25);
    B b;
    b.show(a);
    return 0;
}
