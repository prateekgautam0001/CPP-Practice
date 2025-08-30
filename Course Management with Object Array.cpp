#include <iostream>
using namespace std;

class Course {
private:
    string title;

public:
    Course() {
        title = "Untitled";
    }

    void show() {
        cout << "Course: " << title << endl;
    }
};

int main() {
    Course courses[3];  // array of 3 objects using default constructor
    for (int i = 0; i < 3; ++i)
        courses[i].show();
    return 0;
}
