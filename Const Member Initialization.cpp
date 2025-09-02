#include <iostream>
using namespace std;

class A {
    const int x;
public:
    A(int val) : x(val) {
        cout << "Const x = " << x << endl;
    }
};

int main() {
    A a(42);
    return 0;
}
