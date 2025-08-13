#include <iostream>
using namespace std;

class Car {
public:
    string model;
    int year;

    void getData() {
        cout << "Enter model and year: ";
        cin >> model >> year;
    }

    bool isModel(string m) {
        return model == m;
    }

    void display() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car c[3];
    for(int i = 0; i < 3; i++) c[i].getData();

    string searchModel;
    cout << "Enter model to search: ";
    cin >> searchModel;

    for(int i = 0; i < 3; i++) {
        if (c[i].isModel(searchModel)) {
            c[i].display();
            break;
        }
    }
    return 0;
}
