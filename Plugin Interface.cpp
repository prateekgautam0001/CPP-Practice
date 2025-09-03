#include <iostream>
using namespace std;

class Plugin {
public:
    virtual void execute() = 0;
};

class AudioPlugin : public Plugin {
public:
    void execute() {
        cout << "Audio plugin running\n";
    }
};

class VideoPlugin : public Plugin {
public:
    void execute() {
        cout << "Video plugin running\n";
    }
};

int main() {
    Plugin* p = new VideoPlugin();
    p->execute();
    delete p;
}
