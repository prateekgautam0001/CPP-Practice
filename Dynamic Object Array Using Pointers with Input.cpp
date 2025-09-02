#include <iostream>
using namespace std;

class A {
    int n;
public:
    void input() {
        cin >> n;
    }
    void output() {
        cout << n << endl;
    }
};

int main() {
    int size = 3;
    A* arr = new A[size];
    for (int i = 0; i < size; ++i)
        arr[i].input();
    for (int i = 0; i < size; ++i)
        arr[i].output();
    delete[] arr;
    return 0;
}
