#include <iostream>
using namespace std;

class Logger {
private:
    static int copyCount;
    string message;

public:
    Logger(string msg) {
        message = msg;
    }

    Logger(const Logger& l) {
        message = l.message;
        copyCount++;
        cout << "Copied object. Total copies: " << copyCount << endl;
    }

    void show() {
        cout << "Log: " << message << endl;
    }
};

int Logger::copyCount = 0;

int main() {
    Logger log1("Started server");
    Logger log2 = log1;
    Logger log3 = log2;
    return 0;
}
