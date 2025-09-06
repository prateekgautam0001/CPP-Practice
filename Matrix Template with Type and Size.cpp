#include <iostream>
using namespace std;

template <typename T, int Rows, int Cols>
class Matrix {
    T mat[Rows][Cols];
public:
    void set(int r, int c, T val) { mat[r][c] = val; }
    T get(int r, int c) { return mat[r][c]; }
};

int main() {
    Matrix<int, 2, 2> m;
    m.set(0, 0, 5);
    cout << m.get(0, 0) << endl;
}
