#include <iostream>
using namespace std;

class Flight {
    string destination;
    int flightNumber;
public:
    Flight(string d = "Unknown", int f = 1000) {
        destination = d;
        flightNumber = f;
    }
    void showDetails() {
        cout << "Flight " << flightNumber << " to " << destination << endl;
    }
};

int main() {
    Flight f1, f2("London", 2345);
    f1.showDetails();
    f2.showDetails();
    return 0;
}
