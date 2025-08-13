#include <iostream>
using namespace std;

class Number {
public:
    int value;
    Number(int v) : value(v) {}

    void display() {
        cout << "Value: " << value << endl;
    }
};

void copyNumber(Number n) {
    cout << "Copied ";
    n.display();
}

int main() {
    Number n1(25);
    copyNumber(n1);
    return 0;
}
