#include <iostream>
using namespace std;

class Employee {
    static int nextID;
    int id;
public:
    Employee() {
        id = nextID++;
    }

    void show() const {
        cout << "Employee ID: " << id << endl;
    }

    static int getNextID() {
        return nextID;
    }
};

int Employee::nextID = 1001;

int main() {
    Employee e1, e2, e3;
    e1.show();
    e2.show();
    e3.show();
    cout << "Next available ID: " << Employee::getNextID() << endl;
    return 0;
}
