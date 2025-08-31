#include <iostream>
using namespace std;

class Stack {
    int *arr;
    int top, size;
public:
    Stack(int s) {
        size = s;
        arr = new int[size];
        top = -1;
    }
    void push(int val) {
        if (top < size - 1)
            arr[++top] = val;
    }
    void display() {
        for (int i = 0; i <= top; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    ~Stack() {
        delete[] arr;
        cout << "Stack destroyed" << endl;
    }
};

int main() {
    Stack s(5);
    s.push(10);
    s.push(20);
    s.display();
    return 0;
}
