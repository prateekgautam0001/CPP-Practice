#include <iostream>
using namespace std;

class Counter {
private:
    static int count;

public:
    static void show() {
        cout << "Count: " << count << endl;
    }

    friend void increment();
};

int Counter::count = 0;

void increment() {
    Counter::count += 5;
}

int main() {
    increment();
    Counter::show();
    return 0;
}
