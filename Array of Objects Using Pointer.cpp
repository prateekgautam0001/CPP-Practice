#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "In A\n";
    }
};

int main() {
    A* arr = new A[3];
    for (int i = 0; i < 3; ++i)
        arr[i].show();
    delete[] arr;
    return 0;
}
