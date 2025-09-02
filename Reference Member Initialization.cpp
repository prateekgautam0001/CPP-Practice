#include <iostream>
using namespace std;

class A {
    int& ref;
public:
    A(int& r) : ref(r) {
        cout << "Reference = " << ref << endl;
    }
};

int main() {
    int x = 100;
    A a(x);
    return 0;
}
