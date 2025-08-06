#include <iostream>
using namespace std;

inline float volume(float side) {
    return side * side * side;
}

int main() {
    cout << "Volume of cube: " << volume(3.5);
    return 0;
}
