#include <iostream>
using namespace std;

int absolute(int);

int main() {
    cout << absolute(-10);
    return 0;
}

int absolute(int n) {
    return (n < 0) ? -n : n;
}