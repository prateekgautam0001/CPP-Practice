#include <iostream>
#include <vector>
using namespace std;

class UserRecord {
private:
    string name;
    string password;

public:
    UserRecord(string n, string p) : name(n), password(p) {}

    friend class DatabaseAdmin;
};

class DatabaseAdmin {
public:
    void showRecord(const UserRecord &u) {
        cout << "Name: " << u.name << ", Password: " << u.password << endl;
    }
};

int main() {
    vector<UserRecord> users = {
        UserRecord("Alice", "1234"),
        UserRecord("Bob", "abcd")
    };

    DatabaseAdmin admin;
    for (auto &u : users)
        admin.showRecord(u);
    return 0;
}
