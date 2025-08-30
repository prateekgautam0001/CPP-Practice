#include <iostream>
using namespace std;

class Company;

class Employee {
private:
    string name;
    double salary;

public:
    Employee(string n, double s) : name(n), salary(s) {}

    friend class Company;
};

class Company {
public:
    void giveBonus(Employee &e, double percent) {
        e.salary += e.salary * percent / 100;
        cout << "Bonus applied. New Salary of " << e.name << ": " << e.salary << endl;
    }
};

int main() {
    Employee emp("Jane", 60000);
    Company comp;
    comp.giveBonus(emp, 10);
    return 0;
}
