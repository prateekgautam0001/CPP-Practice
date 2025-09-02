#include <iostream>
using namespace std;

class A {
public:
    int x = 10;
    void print() {
        cout << "x = " << x << endl;
    }
};

int main() {
    A obj;
    A* ptr = &obj;
    ptr->print();
    return 0;
}
