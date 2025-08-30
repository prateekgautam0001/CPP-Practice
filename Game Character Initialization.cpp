#include <iostream>
using namespace std;

class Character {
private:
    string name;
    int health;

public:
    Character() {
        name = "Hero";
        health = 100;
    }

    void status() {
        cout << "Character: " << name << ", Health: " << health << endl;
    }
};

int main() {
    Character c;
    c.status();
    return 0;
}
