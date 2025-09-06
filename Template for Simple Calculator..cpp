#include <iostream>
using namespace std;

template <typename T>
class Calculator {
    T a, b;
public:
    Calculator(T x, T y) : a(x), b(y) {}
    void add() { cout << a + b << endl; }
    void subtract() { cout << a - b << endl; }
};

int main() {
    Calculator<int> c(10, 5);
    c.add();
    c.subtract();
}
