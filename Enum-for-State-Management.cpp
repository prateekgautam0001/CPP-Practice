#include <iostream>
using namespace std;

enum State { START, PROCESSING, END };

int main() {
    State current = START;

    if (current == START)
        cout << "Initializing..." << endl;

    current = PROCESSING;
    if (current == PROCESSING)
        cout << "Processing data..." << endl;

    current = END;
    if (current == END)
        cout << "Finished!" << endl;

    return 0;
}