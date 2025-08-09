#include <iostream>
using namespace std;

class CricketTeam {
    string teamName;
    int runs[11]; // Runs for each player

public:
    void input() {
        cout << "Enter team name: ";
        cin >> teamName;
        cout << "Enter runs for 11 players: ";
        for (int i = 0; i < 11; i++) cin >> runs[i];
    }

    void display() {
        cout << teamName << " Scores: ";
        for (int i = 0; i < 11; i++) cout << runs[i] << " ";
        cout << "\n";
    }
};

int main() {
    CricketTeam *t = new CricketTeam;
    t->input();
    t->display();
    delete t;
    return 0;
}
