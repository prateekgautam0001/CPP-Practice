#include <iostream>
using namespace std;

union Data {
    int intVal;
    float floatVal;
};

int main() {
    Data d;
    d.intVal = 10;
    cout << "Integer: " << d.intVal << endl;

    d.floatVal = 5.5;
    cout << "Float (overwrites int): " << d.floatVal << endl;

    return 0;
}