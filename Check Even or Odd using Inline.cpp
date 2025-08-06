#include <iostream>
using namespace std;

inline bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int x = 7;
    cout << x << " is " << (isEven(x) ? "Even" : "Odd");
    return 0;
}
