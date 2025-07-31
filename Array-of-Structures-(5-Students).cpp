#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
};

int main() {
    Student s[5] = {
        {"A", 1},
        {"B", 2},
        {"C", 3},
        {"D", 4},
        {"E", 5}
    };

    for (int i = 0; i < 5; i++) {
        cout << s[i].name << " - " << s[i].roll << endl;
    }
    return 0;
}