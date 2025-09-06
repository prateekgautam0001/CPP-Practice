#include <iostream>
using namespace std;

template <typename T, typename U>
class Node {
public:
    T key;
    U value;
    Node* next;
    Node(T k, U v) : key(k), value(v), next(nullptr) {}
};

int main() {
    Node<int, string> n1(1, "One");
    cout << n1.key << " " << n1.value << endl;
}
