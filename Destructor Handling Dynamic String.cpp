#include <iostream>
#include <cstring>
using namespace std;

class Message {
    char *text;
public:
    Message(const char *t) {
        text = new char[strlen(t) + 1];
        strcpy(text, t);
    }
    void show() {
        cout << text << endl;
    }
    ~Message() {
        delete[] text;
    }
};

int main() {
    Message m("Destructor Example");
    m.show();
    return 0;
}
