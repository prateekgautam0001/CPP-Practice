#include <iostream>
using namespace std;

class Sample {
private:
    static int count;

public:
    Sample() { count++; }
    friend void showCount();
};

int Sample::count = 0;

void showCount() {
    cout << "Object count: " << Sample::count << endl;
}

int main() {
    Sample s1, s2, s3;
    showCount();
    return 0;
}
