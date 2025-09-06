#include <iostream>
using namespace std;

template <typename T, int N>
void repeat(T value) {
    for (int i = 0; i < N; i++)
        cout << value << " ";
    cout << endl;
}

int main() {
    repeat<string, 3>("Hi");
    repeat<int, 5>(7);
}
