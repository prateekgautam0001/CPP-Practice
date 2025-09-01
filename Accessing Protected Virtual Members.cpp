#include <iostream>
using namespace std;

class A {
protected:
    int data = 100;
};

class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {
public:
    void print() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    D obj;
    obj.print();
    return 0;
}
