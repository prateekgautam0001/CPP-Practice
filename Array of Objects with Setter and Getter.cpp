#include <iostream>
using namespace std;

class A {
    int val;
public:
    void set(int x) { val = x; }
    int get() { return val; }
};

int main() {
    A* arr = new A[3];
    for (int i = 0; i < 3; ++i)
        arr[i].set((i+1)*10);
    for (int i = 0; i < 3; ++i)
        cout << arr[i].get() << endl;
    delete[] arr;
    return 0;
}
