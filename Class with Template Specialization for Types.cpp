#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Info {
public:
    void show() { cout << "Generic" << endl; }
};

template <>
class Info<int, double> {
public:
    void show() { cout << "Specialized" << endl; }
};

int main() {
    Info<char, float> i1;
    Info<int, double> i2;
    i1.show();
    i2.show();
}
