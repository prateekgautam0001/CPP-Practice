#include <iostream>
using namespace std;

template <typename T>
class Queue {
    T data[100];
    int front = 0, rear = 0;
public:
    void enqueue(T val) { data[rear++] = val; }
    T dequeue() { return data[front++]; }
};

int main() {
    Queue<string> q;
    q.enqueue("A");
    q.enqueue("B");
    cout << q.dequeue() << endl;
}
