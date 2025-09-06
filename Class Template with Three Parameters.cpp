#include <iostream>
using namespace std;

template <typename T1, typename T2, typename T3>
class Triplet {
    T1 a;
    T2 b;
    T3 c;
public:
    Triplet(T1 x, T2 y, T3 z) : a(x), b(y), c(z) {}
    void show() { cout << a << " " << b << " " << c << endl; }
};

int main() {
    Triplet<int, string, double> t(1, "A", 2.5);
    t.show();
}
