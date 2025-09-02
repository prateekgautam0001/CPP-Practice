#include <iostream>
using namespace std;

class A {
public:
    void print() {
        cout << "In Array" << endl;
    }
};

int main() {
    A* arr = new A[3];
    for (int i = 0; i < 3; i++)
        (arr + i)->print();
    delete[] arr;
    return 0;
}
