#include <iostream>
using namespace std;

class Ticket {
private:
    string movieName;
    int seatsAvailable;

public:
    void setMovie(string name, int seats) {
        movieName = name;
        seatsAvailable = seats;
    }

    void bookTicket(int n) {
        if (n <= seatsAvailable) {
            seatsAvailable -= n;
            cout << "Booked " << n << " ticket(s) for " << movieName << endl;
        } else {
            cout << "Not enough seats available!\n";
        }
    }

    void showAvailability() {
        cout << "Movie: " << movieName << "\nSeats Available: " << seatsAvailable << endl;
    }
};

int main() {
    Ticket t;
    t.setMovie("Inception", 50);
    t.bookTicket(5);
    t.showAvailability();
    return 0;
}
