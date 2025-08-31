#include <iostream>
using namespace std;

class Tracker {
    string name;
public:
    Tracker(string n) {
        name = n;
        cout << "Created: " << name << endl;
    }
    ~Tracker() {
        cout << "Destroyed: " << name << endl;
    }
};

void process() {
    Tracker t1("FunctionObject");
}

int main() {
    Tracker t("MainObject");
    process();
    return 0;
}
