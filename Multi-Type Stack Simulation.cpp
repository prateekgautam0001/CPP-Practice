#include <iostream>
using namespace std;

template <typename T, int Size>
class Stack {
    T arr[Size];
    int top = -1;
public:
    void push(T val) { arr[++top] = val; }
    T pop() { return arr[top--]; }
};

int main() {
    Stack<int, 5> s;
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;
}
