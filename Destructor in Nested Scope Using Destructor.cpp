#include <iostream>
using namespace std;

class Scope {
public:
    Scope() {
        cout << "Entered scope" << endl;
    }
    ~Scope() {
        cout << "Exited scope" << endl;
    }
};

int main() {
    {
        Scope s;
    }
    cout << "After scope" << endl;
    return 0;
}
