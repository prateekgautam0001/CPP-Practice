#include <iostream>
using namespace std;

class A {
protected:
    int x = 42;
    friend class B;
};

class B {
public:
    void access(A& a) {
        cout << "Accessed x = " << a.x << endl;
    }
};

int main() {
    A obj;
    B b;
    b.access(obj);
    return 0;
}
