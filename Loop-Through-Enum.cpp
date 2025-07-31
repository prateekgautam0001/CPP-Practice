#include <iostream>
using namespace std;

enum Color { RED = 0, GREEN, BLUE };

int main() {
    for (int i = RED; i <= BLUE; i++) {
        cout << "Color value: " << i << endl;
    }
    return 0;
}