#include <iostream>
using namespace std;

class A {
public:
    int getNumber() {
        return 100;
    }
};

class B : public A {
public:
    double getDouble() {
        return 25.5;
    }
};

class C : public B {
public:
    string getText() {
        return "Multilevel";
    }
};

int main() {
    C obj;
    cout << obj.getNumber() << endl;
    cout << obj.getDouble() << endl;
    cout << obj.getText() << endl;
    return 0;
}
