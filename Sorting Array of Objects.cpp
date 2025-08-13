#include <iostream>
using namespace std;

class Player {
public:
    string name;
    int score;

    void getData() {
        cin >> name >> score;
    }

    void display() {
        cout << name << ": " << score << endl;
    }
};

int main() {
    Player p[3];
    for(int i = 0; i < 3; i++) p[i].getData();

    // Simple bubble sort
    for(int i = 0; i < 2; i++) {
        for(int j = i+1; j < 3; j++) {
            if(p[i].score < p[j].score)
                swap(p[i], p[j]);
        }
    }

    for(int i = 0; i < 3; i++) p[i].display();
    return 0;
}
