#include <iostream>
using namespace std;

class A {
    int x;
public:
    A(int a) : x(a) {}
    void show() {
        cout << "x = " << x << endl;
    }
};

int main() {
    A* ptr = new A(25);
    ptr->show();
    delete ptr;
    return 0;
}
