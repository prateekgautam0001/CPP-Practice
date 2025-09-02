#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Dynamic Object" << endl;
    }
};

int main() {
    A* ptr = new A;
    ptr->show();
    delete ptr;
    return 0;
}
