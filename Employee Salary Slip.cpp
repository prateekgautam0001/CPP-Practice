#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    float basic, hra, da;

public:
    void setDetails(string n, float b, float h, float d) {
        name = n;
        basic = b;
        hra = h;
        da = d;
    }

    float calculateSalary() {
        return basic + hra + da;
    }

    void showSlip() {
        cout << "Employee: " << name << "\nTotal Salary: ₹" << calculateSalary() << endl;
    }
};

int main() {
    Employee e;
    e.setDetails("Amit", 15000, 4000, 3000);
    e.showSlip();
    return 0;
}
