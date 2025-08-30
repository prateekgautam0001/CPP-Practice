#include <iostream>
using namespace std;

class Timer {
private:
    int hours, minutes;

public:
    Timer() {
        hours = 0;
        minutes = 0;
    }

    void showTime() {
        cout << "Time: " << hours << "h " << minutes << "m" << endl;
    }
};

int main() {
    Timer t;
    t.showTime();
    return 0;
}
