#include <iostream>
using namespace std;

template <typename T>
class Container {
public:
    void show() { cout << "Generic Container" << endl; }
};

template <typename T>
class Container<T*> {
public:
    void show() { cout << "Pointer Container" << endl; }
};

int main() {
    Container<int> c1;
    Container<int*> c2;
    c1.show();
    c2.show();
}
