#include <iostream>
using namespace std;

void print() {}

template <typename T, typename... Args>
void print(T first, Args... args) {
    cout << first << " ";
    print(args...);
}

int main() {
    print(1, "two", 3.0, '4');
}
