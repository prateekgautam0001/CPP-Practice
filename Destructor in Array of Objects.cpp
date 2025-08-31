#include <iostream>
using namespace std;

class Demo {
    int id;
public:
    Demo(int i) {
        id = i;
        cout << "Constructor: " << id << endl;
    }
    ~Demo() {
        cout << "Destructor: " << id << endl;
    }
};

int main() {
    Demo d[3] = {Demo(1), Demo(2), Demo(3)};
    return 0;
}
