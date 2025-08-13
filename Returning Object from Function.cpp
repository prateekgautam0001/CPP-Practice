#include <iostream>
using namespace std;

class Counter {
public:
    int count;
    Counter(int c) : count(c) {}

    Counter increment() {
        return Counter(count + 1);
    }

    void show() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1(5);
    Counter c2 = c1.increment();
    c2.show();
    return 0;
}
