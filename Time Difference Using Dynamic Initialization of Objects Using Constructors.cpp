#include <iostream>
using namespace std;

class Time {
    int hours, minutes;
public:
    Time(int h, int m) {
        hours = h;
        minutes = m;
    }
    int toMinutes() {
        return hours * 60 + minutes;
    }
};

int main() {
    Time t1(2, 30), t2(4, 15);
    cout << "Difference: " << t2.toMinutes() - t1.toMinutes() << " minutes" << endl;
    return 0;
}
