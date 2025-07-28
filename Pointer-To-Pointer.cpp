#include<iostream>
using namespace std;

int main(){
    int a=3;
    int *b=&a;
    cout<<"The Value Of a is:"<<a<<endl;
    cout<<"The Address Of a is:"<<b<<endl;
    int **c=&b;
    cout<<"The Address Of b is:"<<c<<endl;
    
    return 0;
}