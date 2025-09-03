#include <fstream>
#include <iostream>
int main(){
    std::ifstream in("nums.txt");
    double x, sum=0;
    int cnt=0;
    while(in>>x){sum+=x; cnt++;}
    std::cout<<sum/cnt;
}
