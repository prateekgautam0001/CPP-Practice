#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Swapper {
    T1 a;
    T2 b;
public:
    Swapper(T1 x, T2 y) : a(x), b(y) {}
    void show() { cout << a << " " << b << endl; }
};

int main() {
    Swapper<int, double> s(10, 20.5);
    s.show();
}
