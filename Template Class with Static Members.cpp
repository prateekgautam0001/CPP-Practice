#include <iostream>
using namespace std;

template <typename T>
class Counter {
    static int count;
public:
    Counter() { count++; }
    static void showCount() { cout << count << endl; }
};

template <typename T>
int Counter<T>::count = 0;

int main() {
    Counter<int> c1, c2;
    Counter<float> c3;
    Counter<int>::showCount();
    Counter<float>::showCount();
}
