#include <iostream>
using namespace std;

int ticketCharge(int price, int tax = 18) {
    return price + (price * tax / 100);
}

int main() {
    cout << "Final price: " << ticketCharge(200);
    return 0;
}
