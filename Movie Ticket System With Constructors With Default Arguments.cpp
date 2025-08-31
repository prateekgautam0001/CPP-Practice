#include <iostream>
using namespace std;

class Ticket {
    string movie;
    int seat;
public:
    Ticket(string m = "Default Movie", int s = 1) {
        movie = m;
        seat = s;
    }
    void printTicket() {
        cout << "Movie: " << movie << ", Seat: " << seat << endl;
    }
};

int main() {
    Ticket t1, t2("Inception", 45);
    t1.printTicket();
    t2.printTicket();
    return 0;
}
