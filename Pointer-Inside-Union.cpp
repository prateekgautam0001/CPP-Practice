#include <iostream>
using namespace std;

union MyUnion {
    int* ptr;
    char ch;
};

int main() {
    int x = 10;
    MyUnion u;
    u.ptr = &x;

    cout << "Pointer points to: " << *(u.ptr) << endl;

    return 0;
}