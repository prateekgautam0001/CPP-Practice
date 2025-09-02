#include <iostream>
using namespace std;

class A {
    int id;
public:
    A(int x) : id(x) {}
    void show() {
        cout << "ID: " << id << endl;
    }
};

int main() {
    A* arr[3] = { new A(10), new A(20), new A(30) };
    for (int i = 0; i < 3; ++i)
        arr[i]->show();
    for (int i = 0; i < 3; ++i)
        delete arr[i];
    return 0;
}
