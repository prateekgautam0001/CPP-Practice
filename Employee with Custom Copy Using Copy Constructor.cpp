#include <iostream>
using namespace std;

class Employee {
    string name;
    double salary;
public:
    Employee(string n, double s) {
        name = n;
        salary = s;
    }
    Employee(const Employee &e) {
        name = e.name;
        salary = e.salary + 1000;
    }
    void display() {
        cout << name << ": " << salary << endl;
    }
};

int main() {
    Employee e1("Tom", 40000);
    Employee e2 = e1;
    e2.display();
    return 0;
}
