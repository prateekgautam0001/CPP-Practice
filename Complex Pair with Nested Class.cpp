#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Data {
    T1 x;
    T2 y;
public:
    Data(T1 a, T2 b) : x(a), y(b) {}
    void show() { cout << x << " " << y << endl; }
};

template <typename T>
class Container {
    Data<T, T> d;
public:
    Container(T a, T b) : d(a, b) {}
    void print() { d.show(); }
};

int main() {
    Container<int> c(10, 20);
    c.print();
}
