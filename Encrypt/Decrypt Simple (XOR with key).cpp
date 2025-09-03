#include <fstream>
#include <iostream>
int main(){
    char c;
    std::ifstream in("plain.txt", std::ios::binary);
    std::ofstream out("cipher.bin", std::ios::binary);
    char key=0xFF;
    while(in.get(c)) out.put(c ^ key);
}
