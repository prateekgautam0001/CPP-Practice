#include <iostream>
using namespace std;

class Notifier {
public:
    virtual void notify() = 0;
};

class Email : public Notifier {
public:
    void notify() {
        cout << "Email notification\n";
    }
};

class SMS : public Notifier {
public:
    void notify() {
        cout << "SMS notification\n";
    }
};

int main() {
    Notifier* n = new Email();
    n->notify();
    delete n;
}
