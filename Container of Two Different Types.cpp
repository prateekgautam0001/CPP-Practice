#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Container {
    T1 x;
    T2 y;
public:
    Container(T1 a, T2 b) : x(a), y(b) {}
    void print() { cout << x << ", " << y << endl; }
};

int main() {
    Container<string, float> c("Temp", 36.5f);
    c.print();
}
