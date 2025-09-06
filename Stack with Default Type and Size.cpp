#include <iostream>
using namespace std;

template <typename T = int, int Size = 5>
class Stack {
    T data[Size];
    int top = -1;
public:
    void push(T val) { if (top < Size - 1) data[++top] = val; }
    T pop() { return (top >= 0) ? data[top--] : T(); }
};

int main() {
    Stack<> s;
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;
}
