#include <iostream>
using namespace std;

class A {
    int x;
public:
    A& set(int x) {
        this->x = x;
        return *this;
    }
    void show() {
        cout << x << endl;
    }
};

int main() {
    A obj;
    obj.set(50).show();
    return 0;
}
