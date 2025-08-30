#include <iostream>
using namespace std;

class SimulationObject {
private:
    int internalState;

public:
    SimulationObject(int s) : internalState(s) {}

    friend class SimulationManager;
};

class SimulationManager {
public:
    void updateState(SimulationObject &obj, int newState) {
        obj.internalState = newState;
        cout << "Updated internal state to: " << obj.internalState << endl;
    }
};

int main() {
    SimulationObject so(10);
    SimulationManager sm;
    sm.updateState(so, 20);
    return 0;
}
