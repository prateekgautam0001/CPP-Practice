#include <fstream>
#include <iostream>
struct Stu{int rn; char name[30];};
int main(){
    Stu s{1,"Alice"};
    std::ofstream out("stu.dat", std::ios::binary | std::ios::app);
    out.write((char*)&s,sizeof(s));
}
