#include <iostream>
using namespace std;

template <typename T>
class Swapper {
    T a, b;
public:
    Swapper(T x, T y) : a(x), b(y) {}
    void doSwap() {
        T temp = a;
        a = b;
        b = temp;
    }
    void show() { cout << a << " " << b << endl; }
};

int main() {
    Swapper<int> s(10, 20);
    s.doSwap();
    s.show();
}
