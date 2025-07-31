#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
};

void display(Student s) {
    cout << "Name: " << s.name << ", Roll: " << s.roll << endl;
}

int main() {
    Student s = {"Rohan", 7};
    display(s);
    return 0;
}