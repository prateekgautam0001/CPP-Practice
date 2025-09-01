#include <iostream>
using namespace std;

class Base {
protected:
    int x = 10;
};

class Derived : public Base {
public:
    void show() {
        cout << "x = " << x << endl;
    }
};

int main() {
    Derived d;
    d.show();
    return 0;
}
