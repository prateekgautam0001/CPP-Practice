#include <iostream>
using namespace std;

template <typename T>
T maxOfThree(T a, T b, T c) {
    return max(max(a, b), c);
}

int main() {
    cout << maxOfThree(3, 7, 5) << endl;
}
