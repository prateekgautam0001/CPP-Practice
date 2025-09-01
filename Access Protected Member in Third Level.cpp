#include <iostream>
using namespace std;

class A {
protected:
    int x = 10;
};

class B : public A {};

class C : public B {
public:
    void show() {
        cout << "x = " << x << endl;
    }
};

int main() {
    C obj;
    obj.show();
    return 0;
}
