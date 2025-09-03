#include <fstream>
#include <iostream>
struct Q{int id; char name[20];};
int main(){
    Q q={2,"Test"};
    std::ofstream out("quiz.dat",std::ios::binary|std::ios::app);
    out.write((char*)&q,sizeof(q));
}
