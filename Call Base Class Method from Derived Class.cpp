#include <iostream>
using namespace std;

class Parent {
public:
    void message() {
        cout << "Message from Parent\n";
    }
};

class Child : public Parent {
public:
    void message() {
        Parent::message();
        cout << "Message from Child\n";
    }
};

int main() {
    Child c;
    c.message();
    return 0;
}
