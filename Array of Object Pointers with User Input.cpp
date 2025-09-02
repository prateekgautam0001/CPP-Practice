#include <iostream>
using namespace std;

class Employee {
    string name;
public:
    void set(string n) { name = n; }
    void print() { cout << name << endl; }
};

int main() {
    Employee* emp[2];
    string name;
    for (int i = 0; i < 2; ++i) {
        cin >> name;
        emp[i] = new Employee();
        emp[i]->set(name);
    }
    for (int i = 0; i < 2; ++i)
        emp[i]->print();
    for (int i = 0; i < 2; ++i)
        delete emp[i];
    return 0;
}
