#include <iostream>
using namespace std;

class Base {
private:
    int baseData;

public:
    Base(int x) : baseData(x) {}
    friend void showAll(Base b, int derivedData);
};

void showAll(Base b, int derivedData) {
    cout << "Base: " << b.baseData << ", Derived: " << derivedData << endl;
}

class Derived : public Base {
private:
    int derivedData;

public:
    Derived(int
