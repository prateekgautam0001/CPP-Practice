#include <iostream>
using namespace std;

void printName(const string &name) {
    cout << "Student Name: " << name << endl;
}

int main() {
    string name = "Aarav";
    printName(name);
    return 0;
}
