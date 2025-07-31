#include <iostream>
using namespace std;

enum Color { RED, GREEN, BLUE };

string colorToString(Color c) {
    switch (c) {
        case RED: return "Red";
        case GREEN: return "Green";
        case BLUE: return "Blue";
        default: return "Unknown";
    }
}

int main() {
    Color c = GREEN;
    cout << "Color: " << colorToString(c) << endl;
    return 0;
}