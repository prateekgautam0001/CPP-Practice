#include <iostream>
using namespace std;

class Login {
private:
    string username, password;

public:
    void setCredentials(string user, string pass) {
        username = user;
        password = pass;
    }

    bool checkLogin(string user, string pass) {
        return (username == user && password == pass);
    }
};

int main() {
    Login user1;
    user1.setCredentials("admin", "1234");

    if (user1.checkLogin("admin", "1234"))
        cout << "Login successful!" << endl;
    else
        cout << "Invalid credentials." << endl;
    return 0;
}
