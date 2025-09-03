#include <ofstream>
#include <iostream>
int main(){
    std::ofstream ofs("file7.txt",std::ios::app);
    ofs<<"Appended line\n";
}
