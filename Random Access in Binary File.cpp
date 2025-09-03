#include <fstream>
#include <iostream>
struct R{int id; double v;};
int main(){
    std::fstream fs("bin2.dat", std::ios::in|std::ios::out|std::ios::binary);
    int n=2;
    fs.seekg((n-1)*sizeof(R));
    R r;
    fs.read((char*)&r,sizeof(r));
    std::cout<<r.id<<" "<<r.v;
}
