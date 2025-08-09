#include <iostream>
using namespace std;

class ProductList {
    string products[5];
    double prices[5];

public:
    void input() {
        cout << "Enter 5 product names and prices:\n";
        for (int i = 0; i < 5; i++)
            cin >> products[i] >> prices[i];
    }

    void display() {
        cout << "--- Product List ---\n";
        for (int i = 0; i < 5; i++)
            cout << products[i] << " : " << prices[i] << "\n";
    }
};

int main() {
    ProductList *list = new ProductList;
    list->input();
    list->display();
    delete list;
    return 0;
}
