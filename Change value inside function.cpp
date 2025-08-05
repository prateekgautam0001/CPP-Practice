#include<iostream>
using namespace std;

void change(int a) {
    a = 100;
    cout << "Inside function: a = " << a << endl;
}

int main() {
    int a = 50;
    change(a);
    cout << "In main: a = " << a << endl;
    return 0;
}
