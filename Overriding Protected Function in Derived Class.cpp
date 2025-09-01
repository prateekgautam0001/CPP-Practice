#include <iostream>
using namespace std;

class Parent {
protected:
    virtual void show() {
        cout << "Parent show\n";
    }
public:
    void call() {
        show();
    }
};

class Child : public Parent {
protected:
    void show() override {
        cout << "Child show\n";
    }
};

int main() {
    Child c;
    c.call();
    return 0;
}
