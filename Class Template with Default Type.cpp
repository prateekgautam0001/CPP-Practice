#include <iostream>
using namespace std;

template <typename T = int>
class Number {
    T num;
public:
    Number(T n) : num(n) {}
    void show() { cout << num << endl; }
};

int main() {
    Number<> n1(50);
    Number<float> n2(3.5);
    n1.show();
    n2.show();
}
