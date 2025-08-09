#include <iostream>
using namespace std;

class Movie {
    string title;
    int ratings[5]; // Ratings from 5 reviewers

public:
    void input() {
        cout << "Enter movie title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter 5 ratings (1-10): ";
        for (int i = 0; i < 5; i++) cin >> ratings[i];
    }

    void display() {
        cout << "Movie: " << title << " Ratings: ";
        for (int i = 0; i < 5; i++) cout << ratings[i] << " ";
        cout << "\n";
    }
};

int main() {
    Movie *m = new Movie;
    m->input();
    m->display();
    delete m;
    return 0;
}
