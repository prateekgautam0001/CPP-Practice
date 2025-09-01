#include <iostream>
using namespace std;

class Counter {
protected:
    int count;
public:
    Counter() : count(0) {}
};

class AdvancedCounter : public Counter {
public:
    void increment() {
        count += 5;
    }
    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    AdvancedCounter c;
    c.increment();
    c.display();
    return 0;
}
