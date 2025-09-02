#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Inside Function" << endl;
    }
};

void call(A* p) {
    p->show();
}

int main() {
    A obj;
    call(&obj);
    return 0;
}
