#include<iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max: " << max(4, 9);
    return 0;
}
