#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Calculator {
    T1 a;
    T2 b;
public:
    Calculator(T1 x, T2 y) : a(x), b(y) {}
    void add() { cout << a + b << endl; }
};

int main() {
    Calculator<int, double> calc(5, 4.5);
    calc.add();
}
