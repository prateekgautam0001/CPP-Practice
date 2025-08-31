#include <iostream>
#include <cmath>
using namespace std;

class Point {
    float x, y;
public:
    Point(float x1, float y1) {
        x = x1; y = y1;
    }
    float distance(Point p) {
        return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
    }
};

int main() {
    Point p1(3.0, 4.0), p2(7.0, 1.0);
    cout << p1.distance(p2) << endl;
    return 0;
}
