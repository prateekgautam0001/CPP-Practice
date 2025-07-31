#include <iostream>
using namespace std;

union Packet {
    int command;
    char raw[4];
};

int main() {
    Packet p;
    p.command = 512;

    cout << "Command as int: " << p.command << endl;
    cout << "Raw bytes: ";
    for (int i = 0; i < 4; i++)
        cout << (int)p.raw[i] << " ";
    cout << endl;

    return 0;
}