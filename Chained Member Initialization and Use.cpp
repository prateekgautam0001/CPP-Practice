#include <iostream>
using namespace std;

class Level1 {
protected:
    int baseVal;
public:
    Level1(int v) : baseVal(v) {}
};

class Level2 : public Level1 {
protected:
    int midVal;
public:
    Level2(int v1, int v2) : Level1(v1), midVal(v2) {}
};

class Level3 : public Level2 {
public:
    Level3(int a, int b) : Level2(a, b) {}
    void print() {
        cout << "Total: " << baseVal + midVal << endl;
    }
};

int main() {
    Level3 obj(7, 8);
    obj.print();
    return 0;
}
