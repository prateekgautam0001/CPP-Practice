#include <iostream>
using namespace std;

class Counter {
    static int count;
public:
    Counter() {
        count++;
    }

    static void showCount() {
        cout << "Total objects created: " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter a, b, c;
    Counter::showCount();
    return 0;
}
