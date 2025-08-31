#include <iostream>
using namespace std;

class Matrix {
    int a[2][2];
public:
    Matrix(int x1, int x2, int x3, int x4) {
        a[0][0] = x1; a[0][1] = x2;
        a[1][0] = x3; a[1][1] = x4;
    }
    Matrix multiply(Matrix m) {
        Matrix result(0, 0, 0, 0);
        result.a[0][0] = a[0][0]*m.a[0][0] + a[0][1]*m.a[1][0];
        result.a[0][1] = a[0][0]*m.a[0][1] + a[0][1]*m.a[1][1];
        result.a[1][0] = a[1][0]*m.a[0][0] + a[1][1]*m.a[1][0];
        result.a[1][1] = a[1][0]*m.a[0][1] + a[1][1]*m.a[1][1];
        return result;
    }
    void display() {
        cout << a[0][0] << " " << a[0][1] << endl;
        cout << a[1][0] << " " << a[1][1] << endl;
    }
};

int main() {
    Matrix m1(1, 2, 3, 4), m2(2, 0, 1, 2);
    Matrix m3 = m1.multiply(m2);
    m3.display();
    return 0;
}
