#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base show\n";
    }
};

class Derived : public Base {
public:
    void extra() {
        cout << "Derived extra\n";
    }
};

void display(Base b) {
    b.show();
}

int main() {
    Derived d;
    display(d);
    return 0;
}
