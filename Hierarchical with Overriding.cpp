#include <iostream>
using namespace std;

class Base {
public:
    virtual void message() {
        cout << "Base message\n";
    }
};

class First : public Base {
public:
    void message() override {
        cout << "First message\n";
    }
};

class Second : public Base {
public:
    void message() override {
        cout << "Second message\n";
    }
};

int main() {
    First f;
    Second s;
    f.message();
    s.message();
    return 0;
}
