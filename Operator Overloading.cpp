#include <iostream>
using namespace std;

class A {
    int val;
public:
    A(int x) : val(x) {}
    A operator+(A obj) {
        return A(val + obj.val);
    }
    void print() {
        cout << val << endl;
    }
};

int main() {
    A a1(5), a2(10);
    A a3 = a1 + a2;
    a3.print();
    return 0;
}
