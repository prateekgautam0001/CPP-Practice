#include <iostream>
using namespace std;

class Payment {
public:
    virtual void process() = 0;
};

class CreditCard : public Payment {
public:
    void process() {
        cout << "Paid with Credit Card\n";
    }
};

class PayPal : public Payment {
public:
    void process() {
        cout << "Paid with PayPal\n";
    }
};

int main() {
    Payment* p = new CreditCard();
    p->process();
    delete p;
}
