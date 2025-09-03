#include <fstream>
#include <iostream>
struct R{int rn; char name[20];};
int main(){
    std::fstream f("rec.dat", std::ios::in|std::ios::out|std::ios::binary);
    R r;
    while(f.read((char*)&r,sizeof(r))){
        if(r.rn==1){
            r.rn=2;
            f.seekp(-static_cast<int>(sizeof(r)),std::ios::cur);
            f.write((char*)&r,sizeof(r));
            break;
        }
    }
}
