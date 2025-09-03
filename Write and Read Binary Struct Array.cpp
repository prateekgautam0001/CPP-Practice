#include <fstream>
#include <iostream>
struct R{int id;double v;};
int main(){
    R arr[3]={{1,1.1},{2,2.2},{3,3.3}};
    std::ofstream out("bin.dat", std::ios::binary);
    out.write((char*)arr,sizeof(arr));
    out.close();
    std::ifstream in("bin.dat", std::ios::binary);
    R b;
    in.read((char*)&b, sizeof(b));
    std::cout<<b.id<<" "<<b.v;
}
