#include <fstream>
#include <iostream>
struct B{char t[20]; int y;};
int main(){
    B b[2]={{"A",2000},{"B",2005}};
    std::ofstream out("st.bin",std::ios::binary);
    int n=2; out.write((char*)&n,sizeof(n));
    out.write((char*)b, sizeof(b));
    out.close();
    std::ifstream in("st.bin",std::ios::binary);
    in.read((char*)&n,sizeof(n));
    B c[2];
    in.read((char*)c,sizeof(c));
    std::cout<<c[1].t<<" "<<c[1].y;
}
