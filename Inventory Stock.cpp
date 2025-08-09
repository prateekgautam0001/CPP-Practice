#include <iostream>
using namespace std;

class Inventory {
    string items[3];
    int quantity[3];

public:
    void input() {
        cout << "Enter 3 items and their quantities:\n";
        for (int i = 0; i < 3; i++) cin >> items[i] >> quantity[i];
    }

    void display() {
        cout << "--- Stock ---\n";
        for (int i = 0; i < 3; i++)
            cout << items[i] << " : " << quantity[i] << "\n";
    }
};

int main() {
    Inventory *inv = new Inventory;
    inv->input();
    inv->display();
    delete inv;
    return 0;
}
