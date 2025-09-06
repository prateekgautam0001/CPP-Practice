#include <iostream>
using namespace std;

template <typename T>
void display(T a) {
    cout << "Single: " << a << endl;
}

template <typename T1, typename T2>
void display(T1 a, T2 b) {
    cout << "Double: " << a << " " << b << endl;
}

int main() {
    display(5);
    display(10, "Apples");
}
