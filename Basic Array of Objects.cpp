#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void getData() {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s[3];
    for(int i = 0; i < 3; i++) s[i].getData();
    for(int i = 0; i < 3; i++) s[i].display();
    return 0;
}
