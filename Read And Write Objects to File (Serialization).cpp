#include <fstream>
#include <iostream>
#include <string>
struct S{int r; char name[20];};
int main(){
    S s{10,"John"};
    std::ofstream out("obj.dat",std::ios::binary);
    out.write((char*)&s,sizeof(s));
    std::ifstream in("obj.dat",std::ios::binary);
    S r;
    in.read((char*)&r,sizeof(r));
    std::cout<<r.r<<" "<<r.name;
}
