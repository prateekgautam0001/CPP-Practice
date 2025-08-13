#include <iostream>
using namespace std;

class B;

class A {
private:
    int data;

public:
    A(int val) : data(val) {}
    friend class B; // B can access all members of A
};

class B {
public:
    void showA(A a) {
        cout << "Data from A: " << a.data << endl;
    }
};

int main() {
    A a(10);
    B b;
    b.showA(a);
    return 0;
}
