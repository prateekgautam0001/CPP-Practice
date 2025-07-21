#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    float average;
    cout<<"Enter the first number: ";cin>>a;
    cout<<endl;
    cout<<"Enter the second number: ";cin>>b;
    cout<<endl;
    cout<<"Enter the third number: ";cin>>c;
    cout<<endl;

    average = (a + b + c) / 3;
    cout<<"The average of the three numbers is: "<<average;

    return 0;
}