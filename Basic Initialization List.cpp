#include <iostream>
using namespace std;

class A {
    int x;
public:
    A(int val) : x(val) {
        cout << "x = " << x << endl;
    }
};

int main() {
    A a(10);
    return 0;
}
