#include<iostream>
using namespace std;

void reverse(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 1, y = 2;
    reverse(x, y);
    cout << "x = " << x << ", y = " << y;
    return 0;
}
