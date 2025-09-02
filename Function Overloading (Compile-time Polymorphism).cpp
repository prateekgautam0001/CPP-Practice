#include <iostream>
using namespace std;

class A {
public:
    void show(int x) {
        cout << "Int: " << x << endl;
    }
    void show(double x) {
        cout << "Double: " << x << endl;
    }
};

int main() {
    A obj;
    obj.show(5);
    obj.show(3.14);
    return 0;
}
