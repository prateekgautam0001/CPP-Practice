#include <iostream>
using namespace std;

template <class T>
class Calculator {
private:
    T a, b;

public:
    Calculator(T x, T y) : a(x), b(y) {}
    friend void add<T>(Calculator<T>);
};

template <class T>
void add(Calculator<T> c) {
    cout << "Sum: " << c.a + c.b << endl;
}

int main() {
    Calculator<int> c1(10, 20);
    Calculator<float> c2(5.5, 4.5);
    add(c1);
    add(c2);
    return 0;
}
