#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Hello from A" << endl;
    }
};

int main() {
    A obj;
    A* ptr = &obj;
    ptr->display();
    return 0;
}
