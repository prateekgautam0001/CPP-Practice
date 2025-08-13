#include <iostream>
using namespace std;

class Item {
private:
    string name;
    int price;

public:
    void set(string n, int p) {
        name = n;
        price = p;
    }

    friend void displayItems(Item[], int);
};

void displayItems(Item items[], int n) {
    for (int i = 0; i < n; ++i)
        cout << items[i].name << ": $" << items[i].price << endl;
}

int main() {
    Item items[2];
    items[0].set("Pen", 10);
    items[1].set("Book", 50);
    displayItems(items, 2);
    return 0;
}
