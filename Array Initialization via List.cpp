#include <iostream>
using namespace std;

class A {
    int arr[3];
public:
    A(int x, int y, int z) : arr{x, y, z} {
        for (int i : arr) cout << i << " ";
        cout << endl;
    }
};

int main() {
    A a(1, 2, 3);
    return 0;
}
