#include <iostream>
using namespace std;

class Temp {
public:
    Temp() {
        cout << "Temp created" << endl;
    }
    ~Temp() {
        cout << "Temp destroyed" << endl;
    }
};

Temp createTemp() {
    Temp t;
    return t;
}

int main() {
    Temp t2 = createTemp();
    return 0;
}
