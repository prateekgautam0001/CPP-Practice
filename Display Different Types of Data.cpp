#include <iostream>
using namespace std;

void display(int a) {
    cout << "Integer: " << a << endl;
}

void display(double d) {
    cout << "Double: " << d << endl;
}

void display(string s) {
    cout << "String: " << s << endl;
}

int main() {
    display(10);
    display(3.14);
    display("Function Overloading");
    return 0;
}
