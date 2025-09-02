#include <iostream>
using namespace std;

class A {
    int val;
public:
    A(int v) : val(v) {}
    bool isEqual(A& other) {
        return this->val == other.val;
    }
};

int main() {
    A a1(10), a2(10), a3(20);
    cout << a1.isEqual(a2) << endl;
    cout << a1.isEqual(a3) << endl;
    return 0;
}
