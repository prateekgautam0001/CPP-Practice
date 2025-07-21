#include<iostream>
using namespace std;

int main(){
    float radius, area;
    float pi = 3.14;

    cout<<"Enter The Radius Of Circle: "<<endl;cin>>radius;
    area = pi * radius * radius;

    cout<<"The Area of Circle Is: "<<area<<endl;
    return 0;
}