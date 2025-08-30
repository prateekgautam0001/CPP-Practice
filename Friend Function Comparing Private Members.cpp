#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int l) : length(l) {}

    friend void compare(Box, Box);
};

void compare(Box b1, Box b2) {
    if (b1.length > b2.length)
        cout << "Box1 is bigger.\n";
    else
        cout << "Box2 is bigger or equal.\n";
}

int main() {
    Box b1(10), b2(20);
    compare(b1, b2);
    return 0;
}
