#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    double salary;

public:
    void getData() {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
    }

    double getSalary() const {
        return salary;
    }

    void display() const {
        cout << "Name: " << name << ", Salary: $" << salary << endl;
    }
};

int main() {
    const int SIZE = 5;
    Employee emp[SIZE];

    // Input data
    for (int i = 0; i < SIZE; i++) {
        cout << "\nEnter details for employee " << i + 1 << ":\n";
        emp[i].getData();
    }

    // Aggregation
    double totalSalary = 0;
    double maxSalary = emp[0].getSalary();

    for (int i = 0; i < SIZE; i++) {
        double sal = emp[i].getSalary();
        totalSalary += sal;
        if (sal > maxSalary)
            maxSalary = sal;
    }

    double averageSalary = totalSalary / SIZE;

    // Output
    cout << "\n=== Employee Data ===\n";
    for (int i = 0; i < SIZE; i++) {
        emp[i].display();
    }

    cout << "\nTotal Salary: $" << totalSalary << endl;
    cout << "Average Salary: $" << averageSalary << endl;
    cout << "Highest Salary: $" << maxSalary << endl;

    return 0;
}
