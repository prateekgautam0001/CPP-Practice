#include <iostream>
using namespace std;

struct Library {
    string books[3];
};

int main() {
    Library l = {{"C++", "Java", "Python"}};
    for (int i = 0; i < 3; i++) {
        cout << l.books[i] << endl;
    }
    return 0;
}