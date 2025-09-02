#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Display called\n";
    }
    void callDisplay() {
        void (A::*ptr)() = &A::display;
        (this->*ptr)();
    }
};

int main() {
    A obj;
    obj.callDisplay();
    return 0;
}
