#include <iostream>
using namespace std;

int main() {
    string user, pass;
    
login:
    cout << "Username: ";
    cin >> user;
    cout << "Password: ";
    cin >> pass;

    if (user == "admin" && pass == "1234") {
        cout << "Login successful!\n";
    } else {
        cout << "Invalid credentials. Try again.\n";
        goto login;
    }

    return 0;
}