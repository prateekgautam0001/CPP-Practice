#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}
    friend void increment(Counter &);
    void show() {
        cout << "Count: " << count << endl;
    }
};

void increment(Counter &c) {
    c.count++;
}

int main() {
    Counter c;
    increment(c);
    increment(c);
    c.show();
    return 0;
}
