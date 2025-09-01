#include <iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "Class A\n";
    }
};

class B : public A {
public:
    void displayB() {
        cout << "Class B\n";
    }
};

class C : public B {
public:
    void displayC() {
        cout << "Class C\n";
    }
};

int main() {
    C obj;
    obj.displayA();
    obj.displayB();
    obj.displayC();
    return 0;
}
