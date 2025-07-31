#include <iostream>
using namespace std;

union Number {
    int i;
    float f;
};

int main() {
    Number n;
    n.i = 25;
    cout << "Integer: " << n.i << endl;

    n.f = 3.14;
    cout << "Float (now overwriting int): " << n.f << endl;

    return 0;
}