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

void modifyBox(Box &b) {
    b.length += 5;
}

int main() {
    Box b1(10);
    modifyBox(b1);
    b1.display();
    return 0;
}
