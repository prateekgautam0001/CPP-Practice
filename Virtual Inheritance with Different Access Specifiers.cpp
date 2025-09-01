#include <iostream>
using namespace std;

class A {
protected:
    int num = 20;
};

class B : virtual public A {};
class C : virtual protected A {};
class D : public B, public C {
public:
    void display() {
        cout << "num = " << num << endl;
    }
};

int main() {
    D obj;
    obj.display();
    return 0;
}
