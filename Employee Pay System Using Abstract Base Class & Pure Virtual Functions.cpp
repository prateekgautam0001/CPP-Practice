#include <iostream>
using namespace std;

class Employee {
public:
    virtual void pay() = 0;
};

class FullTime : public Employee {
public:
    void pay() {
        cout << "Full-time pay\n";
    }
};

class PartTime : public Employee {
public:
    void pay() {
        cout << "Part-time pay\n";
    }
};

int main() {
    Employee* e = new PartTime();
    e->pay();
    delete e;
}
