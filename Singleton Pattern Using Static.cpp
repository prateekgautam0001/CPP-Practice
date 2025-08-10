#include <iostream>
using namespace std;

class Singleton {
private:
    static Singleton* instance;
    Singleton() {}  // private constructor

public:
    static Singleton* getInstance() {
        if (!instance)
            instance = new Singleton();
        return instance;
    }

    void show() {
        cout << "Singleton instance accessed\n";
    }
};

Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* s1 = Singleton::getInstance();
    s1->show();
    Singleton* s2 = Singleton::getInstance();
    cout << (s1 == s2 ? "Same instance\n" : "Different instances\n");
    return 0;
}
