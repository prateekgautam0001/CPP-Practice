#include <iostream>
using namespace std;

class Parent {
public:
    void show(int x) {
        cout << "Parent int: " << x << endl;
    }
};

class Child : public Parent {
public:
    void show(double y) {
        cout << "Child double: " << y << endl;
    }
};

int main() {
    Child obj;
    obj.show(5.5);
    obj.Parent::show(5);
    return 0;
}
