#include <iostream>
using namespace std;

class A {
    int val;
public:
    void assign(int val) {
        this->val = val;
    }
    void print() {
        cout << val << endl;
    }
};

int main() {
    A obj;
    obj.assign(99);
    obj.print();
    return 0;
}
