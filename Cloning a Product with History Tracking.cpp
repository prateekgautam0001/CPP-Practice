#include <iostream>
using namespace std;

class Product {
private:
    string name;
    int version;

public:
    Product(string n, int v) {
        name = n;
        version = v;
    }

    Product(const Product& p) {
        name = p.name;
        version = p.version + 1; // increment version on copy
        cout << "Cloned " << name << " to version " << version << endl;
    }

    void display() {
        cout << "Product: " << name << ", Version: " << version << endl;
    }
};

int main() {
    Product p1("Antivirus", 1);
    Product p2 = p1; // Clone (copy constructor)
    p1.display();
    p2.display();
    return 0;
}
