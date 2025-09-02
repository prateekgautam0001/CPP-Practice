#include <iostream>
using namespace std;

class A {
    int x;
public:
    A(int a = 0) : x(a) {}
    void show() {
        cout << "x = " << x << endl;
    }
};

int main() {
    A* arr = new A[3]{A(1), A(2), A(3)};
    for (int i = 0; i < 3; ++i)
        arr[i].show();
    delete[] arr;
    return 0;
}
