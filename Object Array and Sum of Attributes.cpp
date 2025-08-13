#include <iostream>
using namespace std;

class Product {
public:
    string name;
    float price;

    void getData() {
        cout << "Enter name and price: ";
        cin >> name >> price;
    }

    float getPrice() {
        return price;
    }
};

int main() {
    Product p[3];
    float total = 0;
    for(int i = 0; i < 3; i++) {
        p[i].getData();
        total += p[i].getPrice();
    }
    cout << "Total Price: " << total << endl;
    return 0;
}
