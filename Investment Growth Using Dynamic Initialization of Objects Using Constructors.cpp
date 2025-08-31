#include <iostream>
#include <cmath>
using namespace std;

class Investment {
    double principal, rate;
    int years;
public:
    Investment(double p, double r, int y) {
        principal = p;
        rate = r;
        years = y;
    }
    void showFinalAmount() {
        double amount = principal * pow(1 + rate / 100, years);
        cout << "Final Amount: " << amount << endl;
    }
};

int main() {
    Investment inv(10000, 5, 10);
    inv.showFinalAmount();
    return 0;
}
