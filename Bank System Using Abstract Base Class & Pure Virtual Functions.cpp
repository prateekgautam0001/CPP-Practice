#include <iostream>
using namespace std;

class Account {
public:
    virtual void interest() = 0;
};

class Savings : public Account {
public:
    void interest() {
        cout << "Savings interest\n";
    }
};

class Current : public Account {
public:
    void interest() {
        cout << "No interest on Current\n";
    }
};

int main() {
    Account* a = new Savings();
    a->interest();
    delete a;
}
