#include <fstream>
#include <iostream>
struct R{int id; float m;};
int main(){
    std::ifstream in("t.dat",std::ios::binary);
    R r;
    while(in.read((char*)&r,sizeof(r))){
        std::cout<<r.id<<" "<<r.m<<"\n";
    }
}
