#include <iostream>
using namespace std;

enum Level { LOW, MEDIUM, HIGH };

void displayLevel(Level l) {
    if (l == LOW) cout << "Low Level" << endl;
    else if (l == MEDIUM) cout << "Medium Level" << endl;
    else cout << "High Level" << endl;
}

int main() {
    displayLevel(HIGH);
    return 0;
}