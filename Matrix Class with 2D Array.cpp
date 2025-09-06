#include <iostream>
using namespace std;

template <typename T>
class Matrix {
    T mat[2][2];
public:
    Matrix(T a, T b, T c, T d) {
        mat[0][0] = a; mat[0][1] = b;
        mat[1][0] = c; mat[1][1] = d;
    }
    void display() {
        cout << mat[0][0] << " " << mat[0][1] << endl;
        cout << mat[1][0] << " " << mat[1][1] << endl;
    }
};

int main() {
    Matrix<int> m(1, 2, 3, 4);
    m.display();
}
