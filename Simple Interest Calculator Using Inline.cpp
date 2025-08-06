#include <iostream>
using namespace std;

inline float simpleInterest(float p, float r, float t) {
    return (p * r * t) / 100;
}

int main() {
    cout << "SI = " << simpleInterest(10000, 5, 2);
    return 0;
}
