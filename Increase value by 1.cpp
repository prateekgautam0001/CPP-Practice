#include<iostream>
using namespace std;

void increment(int &a) {
    a += 1;
}

int main() {
    int num = 5;
    increment(num);
    cout << "Incremented value: " << num;
    return 0;
}
