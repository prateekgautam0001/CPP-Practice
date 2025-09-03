#include <iostream>
using namespace std;

class Device {
public:
    virtual void start() = 0;
};

class Printer : public Device {
public:
    void start() {
        cout << "Printer started\n";
    }
};

class Scanner : public Device {
public:
    void start() {
        cout << "Scanner started\n";
    }
};

int main() {
    Device* d = new Scanner();
    d->start();
    delete d;
}
