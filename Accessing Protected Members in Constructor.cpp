#include <iostream>
using namespace std;

class Base {
protected:
    int num;
};

class Derived : public Base {
public:
    Derived(int n) {
        num = n;
    }
    void display() {
        cout << "num = " << num << endl;
    }
};

int main() {
    Derived d(25);
    d.display();
    return 0;
}
