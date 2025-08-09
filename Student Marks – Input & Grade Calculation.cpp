#include <iostream>
using namespace std;

class Student {
    string name;
    int marks[3];

    float calculateAverage() {
        return (marks[0] + marks[1] + marks[2]) / 3.0;
    }

public:
    void inputMarks() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter 3 subject marks: ";
        for (int i = 0; i < 3; i++) cin >> marks[i];
        displayGrade();
    }

    void displayGrade() {
        float avg = calculateAverage(); // Nested call
        cout << "Average: " << avg << " -> Grade: ";
        if (avg >= 90) cout << "A\n";
        else if (avg >= 75) cout << "B\n";
        else cout << "C\n";
    }
};

int main() {
    Student s;
    s.inputMarks();
    return 0;
}
