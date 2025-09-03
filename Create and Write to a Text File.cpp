#include <fstream>
#include <iostream>
int main(){
    std::ofstream ofs("file1.txt");
    ofs << "Hello, file!\n";
    ofs.close();
}
