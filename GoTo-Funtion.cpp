#include <iostream>
using namespace std;

int main() {
    int x = 5;

    if (x == 5) {
        goto printMessage;
    }

    cout << "This will be skipped.\n";

printMessage:
    cout << "Jumped to this line using goto!\n";

    return 0;
}