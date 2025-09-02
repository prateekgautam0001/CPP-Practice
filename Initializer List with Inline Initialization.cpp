#include <iostream>
using namespace std;

class A {
    int x = 1;
    int y;
public:
    A(int val) : y(val) {
        cout << x << " " << y << endl;
    }
};

int main() {
    A a(99);
    return 0;
}
