#include <iostream>
using namespace std;

class X {
public:
    void display() {
        cout << "Display from X\n";
    }
};

class Y {
public:
    void display() {
        cout << "Display from Y\n";
    }
};

class Z : public X, public Y {
public:
    void displayZ() {
        X::display();
        Y::display();
    }
};

int main() {
    Z obj;
    obj.displayZ();
    return 0;
}
