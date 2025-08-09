#include <iostream>
using namespace std;

class Employee {
    string name;
    int attendance[30]; // Days of month (1=present, 0=absent)

public:
    void input() {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter attendance for 30 days (1/0): ";
        for (int i = 0; i < 30; i++) cin >> attendance[i];
    }

    void display() {
        cout << name << " Attendance: ";
        for (int i = 0; i < 30; i++) cout << attendance[i] << " ";
        cout << "\n";
    }
};

int main() {
    Employee *e = new Employee;
    e->input();
    e->display();
    delete e;
    return 0;
}
