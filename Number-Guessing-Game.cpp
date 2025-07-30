#include <iostream>
using namespace std;

int main() {
    int guess;
    int secret = 7;

start:
    cout << "Guess a number (1–10): ";
    cin >> guess;

    if (guess != secret) {
        cout << "Wrong! Try again.\n";
        goto start;
    }

    cout << "Correct! You guessed the number.\n";
    return 0;
}