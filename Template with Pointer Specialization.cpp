#include <iostream>
using namespace std;

template <typename T>
class Wrapper {
public:
    void show() { cout << "General" << endl; }
};

template <typename T>
class Wrapper<T*> {
public:
    void show() { cout << "Pointer" << endl; }
};

int main() {
    Wrapper<int> w1;
    Wrapper<int*> w2;
    w1.show();
    w2.show();
}
