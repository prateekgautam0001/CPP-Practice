#include <iostream>
using namespace std;

class A {
    int val;
public:
    void set(int v) {
        val = v;
    }
    int get() {
        return val;
    }
};

int main() {
    A obj;
    A* ptr = &obj;
    ptr->set(100);
    cout << ptr->get() << endl;
    return 0;
}
