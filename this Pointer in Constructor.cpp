#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Object address: " << this << endl;
    }
};

int main() {
    A obj;
    cout << "Main address: " << &obj << endl;
    return 0;
}
