#include <iostream>
using namespace std;

class Product {
private:
    string name;
    int price;

public:
    Product() {
        name = "Unknown";
        price = 0;
    }

    void display() {
        cout << "Product: " << name << ", Price: $" << price << endl;
    }
};

int main() {
    Product p;
    p.display();
    return 0;
}
