#include <iostream>
using namespace std;

class A {
    int x, y;
public:
    A(int a, int b) : x(a), y(b) {
        cout << x << " " << y << endl;
    }
};

int main() {
    A a(5, 15);
    return 0;
}
