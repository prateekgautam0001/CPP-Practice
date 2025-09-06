#include <iostream>
using namespace std;

template <typename T>
class Container {
    T data;
public:
    Container(T d) : data(d) {}
    template <typename U>
    void display(U extra) {
        cout << data << " " << extra << endl;
    }
};

int main() {
    Container<int> c(42);
    c.display("Answer");
}
