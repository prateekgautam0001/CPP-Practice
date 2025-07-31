#include <iostream>
using namespace std;

struct Test {
    union {
        int x;
        float y;
    };
};

int main() {
    Test t;
    t.x = 20;
    cout << "X: " << t.x << endl;

    t.y = 4.5;
    cout << "Y (overwrites x): " << t.y << endl;

    return 0;
}