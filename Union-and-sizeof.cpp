#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char c;
};

int main() {
    cout << "Size of union: " << sizeof(Data) << " bytes" << endl;
    return 0;
}