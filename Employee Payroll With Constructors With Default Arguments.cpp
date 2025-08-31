#include <iostream>
using namespace std;

class Employee {
    string name;
    double salary;
public:
    Employee(string n = "Employee", double s = 30000.0) {
        name = n;
        salary = s;
    }
    void display() {
        cout << name << " earns $" << salary << endl;
    }
};

int main() {
    Employee e1, e2("Sam", 55000);
    e1.display();
    e2.display();
    return 0;
}
