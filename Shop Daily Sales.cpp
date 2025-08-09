#include <iostream>
using namespace std;

class Shop {
    string name;
    double sales[7]; // Weekly sales

public:
    void input() {
        cout << "Enter shop name: ";
        cin >> name;
        cout << "Enter sales for 7 days: ";
        for (int i = 0; i < 7; i++) cin >> sales[i];
    }

    void display() {
        cout << name << " Weekly Sales: ";
        for (int i = 0; i < 7; i++) cout << sales[i] << " ";
        cout << "\n";
    }
};

int main() {
    Shop *s = new Shop;
    s->input();
    s->display();
    delete s;
    return 0;
}
