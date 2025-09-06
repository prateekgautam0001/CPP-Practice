#include <iostream>
using namespace std;

template <typename T>
bool isEqual(T a, T b) {
    return a == b;
}

int main() {
    cout << isEqual(10, 10) << endl;
    cout << isEqual(3.5, 2.5) << endl;
}
