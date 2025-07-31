#include <iostream>
using namespace std;

enum Color { RED, GREEN, BLUE };

int main() {
    Color c = BLUE;

    switch (c) {
        case RED: cout << "Stop!" << endl; break;
        case GREEN: cout << "Go!" << endl; break;
        case BLUE: cout << "Cool color!" << endl; break;
    }

    return 0;
}