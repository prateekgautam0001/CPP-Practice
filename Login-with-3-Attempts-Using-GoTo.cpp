#include <iostream>
using namespace std;

int main() {
    string user, pass;
    int attempts = 3;

login:
    if (attempts == 0) {
        cout << "Account locked.\n";
        return 0;
    }

    cout << "Username: ";
    cin >> user;
    cout << "Password: ";
    cin >> pass;

    if (user == "admin" && pass == "pass") {
        cout << "Login successful.\n";
    } else {
        cout << "Wrong credentials. Attempts left: " << --attempts << endl;
        goto login;
    }

    return 0;
}