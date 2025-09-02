#include <iostream>
using namespace std;

class A {
    int x, y;
public:
    A(int a, int b) : y(b), x(a) {
        cout << x << " " << y << endl;
    }
};

int main() {
    A a(5, 10);
    return 0;
}
