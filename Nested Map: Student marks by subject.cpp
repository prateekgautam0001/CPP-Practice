#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, map<string, int>> students;
    students["Alice"]["Math"] = 90;
    students["Alice"]["Science"] = 85;
    students["Bob"]["Math"] = 78;
    for(auto& stu : students) {
        cout << stu.first << ": ";
        for(auto& subj : stu.second) cout << subj.first << "=" << subj.second << " ";
        cout << endl;
    }
}
