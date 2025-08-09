#include <iostream>
using namespace std;

class Weather {
    string city;
    float temps[7]; // Week temperatures

public:
    void input() {
        cout << "Enter city: ";
        cin >> city;
        cout << "Enter temperatures for 7 days: ";
        for (int i = 0; i < 7; i++) cin >> temps[i];
    }

    void display() {
        cout << "Weather for " << city << ": ";
        for (int i = 0; i < 7; i++) cout << temps[i] << " ";
        cout << "\n";
    }
};

int main() {
    Weather *w = new Weather;
    w->input();
    w->display();
    delete w;
    return 0;
}
