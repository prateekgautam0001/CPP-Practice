#include <iostream>
using namespace std;

template <typename T>
class Stack {
    T data[100];
    int top = -1;
public:
    void push(T val) { data[++top] = val; }
    T pop() { return data[top--]; }
};

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;
}
