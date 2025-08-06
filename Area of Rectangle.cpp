#include <iostream>
using namespace std;

int area(int length, int width = 10) {
    return length * width;
}

int main() {
    cout << "Area 1: " << area(5, 4) << endl;
    cout << "Area 2: " << area(5) << endl;  // Default width = 10
    return 0;
}
