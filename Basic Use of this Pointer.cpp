#include <iostream>
using namespace std;

class A {
    int x;
public:
    void set(int x) {
        this->x = x;
    }
    void show() {
        cout << x << endl;
    }
};

int main() {
    A obj;
    obj.set(10);
    obj.show();
    return 0;
}
