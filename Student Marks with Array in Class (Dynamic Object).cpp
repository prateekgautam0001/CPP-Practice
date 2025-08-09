#include <iostream>
using namespace std;

class Student {
    string name;
    int marks[5]; // Array inside class

public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks for 5 subjects: ";
        for (int i = 0; i < 5; i++) cin >> marks[i];
    }

    void display() {
        cout << "Student: " << name << " Marks: ";
        for (int i = 0; i < 5; i++) cout << marks[i] << " ";
        cout << "\n";
    }
};

int main() {
    Student *s = new Student; // Dynamic object
    s->input();
    s->display();
    delete s;
    return 0;
}
