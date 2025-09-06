#include <iostream>
using namespace std;

template <typename T>
T minimum(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    cout << minimum(3, 7) << endl;
    cout << minimum(5.6, 2.3) << endl;
}
