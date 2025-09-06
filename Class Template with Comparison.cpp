#include <iostream>
using namespace std;

template <typename T>
class Compare {
    T a, b;
public:
    Compare(T x, T y) : a(x), b(y) {}
    T max() { return (a > b) ? a : b; }
};

int main() {
    Compare<int> c(5, 9);
    cout << c.max() << endl;
}
