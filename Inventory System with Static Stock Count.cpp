#include <iostream>
using namespace std;

class Item {
private:
    static int stock;

public:
    Item() {
        stock++;
    }

    static void showStock() {
        cout << "Total items in stock: " << stock << endl;
    }
};

int Item::stock = 0;

int main() {
    Item i1, i2, i3;
    Item::showStock();
    return 0;
}
