#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    double salary;

public:
    Employee() {
        name = "Employee";
        salary = 3000.00;
    }

    void printPaySlip() {
        cout << name << " earns $" << salary << " per month." << endl;
    }
};

int main() {
    Employee e;
    e.printPaySlip();
    return 0;
}
