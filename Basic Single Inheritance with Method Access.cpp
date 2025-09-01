#include <iostream>
using namespace std;

class Parent {
public:
    void display() {
        cout << "Parent class method\n";
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "Child class method\n";
    }
};

int main() {
    Child obj;
    obj.display();
    obj.show();
    return 0;
}
