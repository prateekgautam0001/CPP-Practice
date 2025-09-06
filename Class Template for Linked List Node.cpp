#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node* next;
    Node(T val) : data(val), next(nullptr) {}
    void display() { cout << data << endl; }
};

int main() {
    Node<int> n1(10);
    Node<int> n2(20);
    n1.next = &n2;
    n1.display();
    n1.next->display();
}
