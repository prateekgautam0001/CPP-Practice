#include <iostream>
using namespace std;

class Base {
private:
    int secret;

public:
    Base(int s) : secret(s) {}

    friend class Viewer;
};

class Viewer {
public:
    void view(Base b) {
        cout << "Secret from Base: " << b.secret << endl;
    }
};

class Derived : public Viewer {
    // inherits view()
};

int main() {
    Base b(42);
    Derived d;
    d.view(b);
    return 0;
}
