#include <iostream>
using namespace std;

class A {
public:
    int x;
};

class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {
public:
    void set(int val) {
        x = val;
    }
    void display() {
        cout << "x = " << x << endl;
    }
};

int main() {
    D obj;
    obj.set(10);
    obj.display();
    return 0;
}
