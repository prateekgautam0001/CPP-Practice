#include <iostream>
using namespace std;

class Base {
public:
    int a;
    void setA(int val) {
        this->a = val;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "a = " << this->a << endl;
    }
};

int main() {
    Derived d;
    d.setA(15);
    d.display();
    return 0;
}
