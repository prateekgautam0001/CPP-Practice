#include <iostream>
#include <string>
using namespace std;

class Logger {
public:
    static void log(const string& message) {
        cout << "[LOG]: " << message << endl;
    }
};

int main() {
    Logger::log("Application started");
    Logger::log("Processing data...");
    Logger::log("Application finished");
    return 0;
}
