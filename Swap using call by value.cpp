#include<iostream>
using namespace std;

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside function: a = " << a << ", b = " << b << endl;
}

int main() {
    int x = 10, y = 20;
    swap(x, y);
    cout << "In main: x = " << x << ", y = " << y << endl;
    return 0;
}
