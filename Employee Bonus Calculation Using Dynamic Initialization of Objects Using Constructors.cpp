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
    void displayBonus() {
        double bonus = (salary > 50000) ? 0.1 * salary : 0.05 * salary;
        cout << name << ": $" << bonus << endl;
    }
};

int main() {
    Employee e1("John", 60000), e2("Max", 40000);
    e1.displayBonus();
    e2.displayBonus();
    return 0;
}
