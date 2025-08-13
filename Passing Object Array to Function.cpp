#include <iostream>
using namespace std;

class Item {
public:
    string name;
    float cost;

    void getData() {
        cin >> name >> cost;
    }

    void display() {
        cout << name << ": $" << cost << endl;
    }
};

void printItems(Item items[], int n) {
    for(int i = 0; i < n; i++) items[i].display();
}

int main() {
    Item items[2];
    for(int i = 0; i < 2; i++) items[i].getData();

    printItems(items, 2);
    return 0;
}
