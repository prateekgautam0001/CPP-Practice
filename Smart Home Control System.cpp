#include <iostream>
using namespace std;

class Device;

class Controller {
public:
    void toggle(Device &);
};

class Device {
private:
    bool isOn;

public:
    Device() : isOn(false) {}

    friend void Controller::toggle(Device &);
};

void Controller::toggle(Device &d) {
    d.isOn = !d.isOn;
    cout << "Device is now " << (d.isOn ? "ON" : "OFF") << endl;
}

int main() {
    Device fan;
    Controller ctrl;
    ctrl.toggle(fan);
    ctrl.toggle(fan);
    return 0;
}
