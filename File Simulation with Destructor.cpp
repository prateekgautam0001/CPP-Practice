#include <iostream>
using namespace std;

class File {
    string filename;
public:
    File(string f) {
        filename = f;
        cout << "Opened file: " << filename << endl;
    }
    ~File() {
        cout << "Closed file: " << filename << endl;
    }
};

int main() {
    File f1("data.txt");
    return 0;
}
