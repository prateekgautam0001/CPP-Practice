#include <iostream>
using namespace std;

template <typename T>
T multiply(T a, T b = 1) {
    return a * b;
}

int main() {
    cout << multiply(5) << endl;
    cout << multiply(5, 3) << endl;
}
