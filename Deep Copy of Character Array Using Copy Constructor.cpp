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
    Message(const Message &m) {
        text = new char[strlen(m.text) + 1];
        strcpy(text, m.text);
    }
    void show() {
        cout << text << endl;
    }
    ~Message() {
        delete[] text;
    }
};

int main() {
    Message m1("Hello, World!");
    Message m2 = m1;
    m2.show();
    return 0;
}
