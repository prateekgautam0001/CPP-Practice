#include<iostream>
using namespace std;

void multiply(int x) {
    x *= 10;
    cout << "Inside multiply: " << x << endl;
}

int main() {
    int num = 4;
    multiply(num);
    cout << "Original value: " << num << endl;
    return 0;
}
