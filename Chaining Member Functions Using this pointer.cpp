#include <iostream>
using namespace std;

class A {
    int x, y;
public:
    A& setX(int x) {
        this->x = x;
        return *this;
    }
    A& setY(int y) {
        this->y = y;
        return *this;
    }
    void show() {
        cout << x << " " << y << endl;
    }
};

int main() {
    A obj;
    obj.setX(5).setY(10).show();
    return 0;
}
