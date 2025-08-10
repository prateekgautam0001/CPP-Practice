#include <iostream>
using namespace std;

class Product {
    int id;
    float price;
    static float discount;

public:
    Product(int id, float price) : id(id), price(price) {}

    static void setDiscount(float d) {
        discount = d;
    }

    void showFinalPrice() {
        cout << "Product " << id << " final price: " << price - (price * discount / 100) << endl;
    }
};

float Product::discount = 0;

int main() {
    Product::setDiscount(10);  // Apply 10% discount

    Product p1(101, 500), p2(102, 1000);
    p1.showFinalPrice();
    p2.showFinalPrice();
    return 0;
}
