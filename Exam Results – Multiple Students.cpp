#include <iostream>
using namespace std;

class Exam {
    string name;
    int marks[3];

public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks for 3 subjects: ";
        for (int i = 0; i < 3; i++) cin >> marks[i];
    }

    void display() {
        cout << name << " Marks: ";
        for (int i = 0; i < 3; i++) cout << marks[i] << " ";
        cout << "\n";
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Exam *students = new Exam[n]; // Array of objects
    for (int i = 0; i < n; i++) students[i].input();
    cout << "\n--- Results ---\n";
    for (int i = 0; i < n; i++) students[i].display();

    delete[] students;
    return 0;
}
