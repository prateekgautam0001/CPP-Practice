#include <iostream>
using namespace std;

class Employee {
    string name;
    int salary;

public:
    Employee(string n, int s) : name(n), salary(s) {}

    void display() {
        cout << "Employee: " << name << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee e[2] = { Employee("John", 5000), Employee("Jane", 6000) };
    for (int i = 0; i < 2; i++) e[i].display();
    return 0;
}
