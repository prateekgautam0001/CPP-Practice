#include <iostream>
using namespace std;

struct Employee {
    int id;
    union {
        int age;
        float experience;
    };
};

int main() {
    Employee e;
    e.id = 1;
    e.age = 30;

    cout << "ID: " << e.id << ", Age: " << e.age << endl;

    e.experience = 5.6;
    cout << "Experience (overwrites age): " << e.experience << endl;

    return 0;
}