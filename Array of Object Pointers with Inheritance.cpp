#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base\n";
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived\n";
    }
};

int main() {
    Base* arr[3];
    for (int i = 0; i < 3; ++i)
        arr[i] = new Derived();
    for (int i = 0; i < 3; ++i)
        arr[i]->show();
    for (int i = 0; i < 3; ++i)
        delete arr[i];
    return 0;
}
