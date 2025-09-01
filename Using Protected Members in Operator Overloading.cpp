#include <iostream>
using namespace std;

class Number {
protected:
    int value;
public:
    Number(int v) : value(v) {}
    int getValue() const { return value; }
};

class Increment : public Number {
public:
    Increment(int v) : Number(v) {}
    Increment operator++() {
        ++value;
        return *this;
    }
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Increment obj(10);
    ++obj;
    obj.display();
    return 0;
}
