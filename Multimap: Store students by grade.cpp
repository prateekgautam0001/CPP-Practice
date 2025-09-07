#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<char, string> students;
    students.insert({'A', "John"});
    students.insert({'B', "Alex"});
    students.insert({'A', "Mia"});
    for(auto p : students) cout << p.first << " - " << p.second << endl;
}
