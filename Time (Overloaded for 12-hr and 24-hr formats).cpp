#include <iostream>
using namespace std;

class Time {
private:
    int hour, minute;

public:
    Time() {
        hour = 0;
        minute = 0;
    }

    Time(int h, int m) {
        hour = h;
        minute = m;
    }

    Time(int h, int m, bool isPM) {
        hour = isPM ? h + 12 : h;
        minute = m;
    }

    void show() {
        cout << "Time: " << hour << ":" << (minute < 10 ? "0" : "") << minute << endl;
    }
};

int main() {
    Time t1;
    Time t2(14, 30);
    Time t3(2, 45, true);
    t1.show();
    t2.show();
    t3.show();
    return 0;
}
