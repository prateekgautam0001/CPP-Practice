#include <iostream>
using namespace std;

class Player {
    string name;
    int score;
    static int maxScore;

public:
    Player(string n, int s) : name(n), score(s) {
        if (s > maxScore) maxScore = s;
    }

    static void showMaxScore() {
        cout << "Highest score so far: " << maxScore << endl;
    }
};

int Player::maxScore = 0;

int main() {
    Player p1("Alice", 50), p2("Bob", 70), p3("Carol", 65);
    Player::showMaxScore();
    return 0;
}
