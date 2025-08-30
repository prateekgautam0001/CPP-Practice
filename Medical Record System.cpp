#include <iostream>
using namespace std;

class Patient;

class Doctor {
public:
    void accessRecord(const Patient &p);
};

class Patient {
private:
    string name;
    string diagnosis;

public:
    Patient(string n, string d) : name(n), diagnosis(d) {}

    friend void Doctor::accessRecord(const Patient &);
};

void Doctor::accessRecord(const Patient &p) {
    cout << "Patient: " << p.name << ", Diagnosis: " << p.diagnosis << endl;
}

int main() {
    Patient p("John", "Hypertension");
    Doctor d;
    d.accessRecord(p);
    return 0;
}
