#include <iostream>
using namespace std;

template <typename T>
class Calculator {
    T a, b;
public:
    Calculator(T x, T y) : a(x), b(y) {}
    T add() { return a + b; }
    T multiply() { return a * b; }
};

int main() {
    Calculator<int> c(4, 5);
    cout << c.add() << " " << c.multiply() << endl;
}
