#include <iostream>
using namespace std;

class LimitedObject {
    static int count;
    static const int maxObjects;

public:
    LimitedObject() {
        if (count < maxObjects) {
            count++;
            cout << "Object created. Total: " << count << endl;
        } else {
            cout << "Limit reached. Cannot create more objects.\n";
        }
    }
};

int LimitedObject::count = 0;
const int LimitedObject::maxObjects = 3;

int main() {
    LimitedObject a, b, c, d;
    return 0;
}
