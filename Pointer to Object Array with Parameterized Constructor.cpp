#include <iostream>
using namespace std;

class A {
    int id;
public:
    A(int x) : id(x) {}
    void print() {
        cout << "ID: " << id << endl;
    }
};

int main() {
    A* arr[3] = { new A(1), new A(2), new A(3) };
    for (int i = 0; i < 3; i++)
        arr[i]->print();
    for (int i = 0; i < 3; i++)
        delete arr[i];
    return 0;
}
