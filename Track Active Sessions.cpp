#include <iostream>
using namespace std;

class Session {
    static int activeSessions;

public:
    Session() { activeSessions++; }

    ~Session() { activeSessions--; }

    static void showActiveSessions() {
        cout << "Active sessions: " << activeSessions << endl;
    }
};

int Session::activeSessions = 0;

int main() {
    Session::showActiveSessions();
    {
        Session s1, s2;
        Session::showActiveSessions();
    }
    Session::showActiveSessions();
    return 0;
}
