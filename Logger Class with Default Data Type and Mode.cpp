#include <iostream>
using namespace std;

template <typename T = string, bool debugMode = true>
class Logger {
    T message;
public:
    Logger(T msg) : message(msg) {}
    void log() {
        if constexpr (debugMode)
            cout << "[DEBUG] " << message << endl;
        else
            cout << message << endl;
    }
};

int main() {
    Logger<> l1("System running");
    Logger<string, false> l2("Production log");
    l1.log();
    l2.log();
}
