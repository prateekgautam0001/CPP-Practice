#include <iostream>
using namespace std;

union Value {
    int i;
    float f;
    char str[20];
};

enum Type { INT, FLOAT, STRING };

struct Variable {
    Type type;
    Value val;
};

int main() {
    Variable var;
    var.type = INT;
    var.val.i = 42;

    if (var.type == INT)
        cout << "Integer: " << var.val.i << endl;

    return 0;
}