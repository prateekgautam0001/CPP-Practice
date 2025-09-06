#include <iostream>
using namespace std;

void show(int x) {
    cout << "Non-template: " << x << endl;
}

template <typename T>
void show(T x) {
    cout << "Template: " << x << endl;
}

int main() {
    show(10);
    show(3.14);
}
