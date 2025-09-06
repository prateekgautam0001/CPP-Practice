#include <iostream>
using namespace std;

template <typename T = int, int Rows = 2, int Cols = 2>
class Matrix {
    T mat[Rows][Cols];
public:
    void set(int i, int j, T val) { mat[i][j] = val; }
    T get(int i, int j) { return mat[i][j]; }
};

int main() {
    Matrix<> m;
    m.set(0, 0, 5);
    cout << m.get(0, 0) << endl;
}
