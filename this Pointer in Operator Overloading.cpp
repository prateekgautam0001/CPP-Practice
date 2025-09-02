#include <iostream>
using namespace std;

class A {
    int val;
public:
    A(int v) : val(v) {}
    A operator+(A other) {
        return A(this->val + other.val);
    }
    void show() {
        cout << val << endl;
    }
};

int main() {
    A a1(5), a2(15);
    A a3 = a1 + a2;
    a3.show();
    return 0;
}
