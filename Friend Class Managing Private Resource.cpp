#include <iostream>
using namespace std;

class Engine {
private:
    int rpm;

public:
    Engine(int r) : rpm(r) {}

    friend class Mechanic;
};

class Mechanic {
public:
    void tune(Engine &e) {
        e.rpm += 500;
        cout << "Engine tuned. New RPM: " << e.rpm << endl;
    }
};

int main() {
    Engine e(1500);
    Mechanic m;
    m.tune(e);
    return 0;
}
