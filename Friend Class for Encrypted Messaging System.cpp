#include <iostream>
#include <string>
using namespace std;

class Encryptor;

class Message {
private:
    string text;

public:
    Message(string t) : text(t) {}
    void show() const { cout << "Message: " << text << endl; }

    friend class Encryptor;
};

class Encryptor {
public:
    void encrypt(Message &msg) {
        for (char &ch : msg.text)
            ch += 3;
    }

    void decrypt(Message &msg) {
        for (char &ch : msg.text)
            ch -= 3;
    }
};

int main() {
    Message msg("HelloWorld");
    Encryptor e;

    msg.show();
    e.encrypt(msg);
    msg.show();
    e.decrypt(msg);
    msg.show();
    return 0;
}
