#include <iostream>
using namespace std;

class Character {
public:
    virtual void attack() = 0;
};

class Warrior : public Character {
public:
    void attack() {
        cout << "Warrior attacks\n";
    }
};

class Mage : public Character {
public:
    void attack() {
        cout << "Mage casts spell\n";
    }
};

int main() {
    Character* c = new Mage();
    c->attack();
    delete c;
}
