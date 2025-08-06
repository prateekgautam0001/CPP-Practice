#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

inline int cube(int x) {
    return x * x * x;
}

int main() {
    int n = 4;
    cout << "Square: " << square(n) << endl;
    cout << "Cube: " << cube(n) << endl;
    return 0;
}
