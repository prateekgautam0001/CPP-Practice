#include <iostream>
using namespace std;

class Player;

class GameEngine {
public:
    void printStats(const Player &);
};

class Player {
private:
    string name;
    int health, xp;

public:
    Player(string n, int h, int x) : name(n), health(h), xp(x) {}

    friend void GameEngine::printStats(const Player &);
};

void GameEngine::printStats(const Player &p) {
    cout << "Player: " << p.name << ", Health: " << p.health << ", XP: " << p.xp << endl;
}

int main() {
    Player p("Knight", 100, 250);
    GameEngine engine;
    engine.printStats(p);
    return 0;
}
