#include <iostream>
using namespace std;

class Config {
    static string appMode;

public:
    static void setMode(string mode) {
        appMode = mode;
    }

    static string getMode() {
        return appMode;
    }
};

string Config::appMode = "Development";

int main() {
    cout << "Current Mode: " << Config::getMode() << endl;
    Config::setMode("Production");
    cout << "Updated Mode: " << Config::getMode() << endl;
    return 0;
}
