#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point() {
        x = y = 0;
    }

    void show() {
        cout << "Point at (" << x << ", " << y << ")\n";
    }
};

class Line {
private:
    Point start, end;

public:
    Line() {
        // both points default
    }

    void display() {
        cout << "Line info:\n";
        start.show();
        end.show();
    }
};

int main() {
    Line l;
    l.display();
    return 0;
}
