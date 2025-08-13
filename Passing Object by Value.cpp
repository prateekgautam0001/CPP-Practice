#include <iostream>
using namespace std;

class Box {
public:
    int length;
    Box(int l) : length(l) {}

    void display() {
        cout << "Length: " << length << endl;
    }
};

void printBox(Box b) {
    b.display();
}

int main() {
    Box b1(10);
    printBox(b1);
    return 0;
}
